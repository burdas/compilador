%{
  #include <stdio.h>
  #include "TablaDeSimbolos.h"
  #include "TablaDeCuadruplas.h"
  #include <string.h>
  int yylex (void);
  void yyerror (char const *);

  TablaDeSimbolos* tabla_simbolos;
  TablaDeCuadruplas* tabla_cuadruplas;

  typedef struct ListaStrings{
        char* string;
        struct ListaStrings* siguiente;
  }ListaStrings;

  typedef struct Expresion{
          int place;
          char* code;
          char* tipo;
  }Expresion;
%}
%union{
        int uEntero;
	char* uString;
        struct ListaStrings* uListaStrings;
        struct Expresion* uExpresion;
}

%token tk_algoritmo
%token<uString> tk_identificador
%token tk_precondicion
%token tk_postcondicion
%token tk_punto_coma
%token tk_punto
%token tk_falgoritmo
%token tk_tipo
%token tk_ftipo
%token tk_const
%token tk_fconst
%token tk_var
%token tk_fvar
%token tk_tupla
%token tk_ftupla
%token tk_igual
%token tk_tabla
%token tk_dospuntos
%token tk_de
%token tk_corchete_abierto
%token tk_corchete_cerrado
%token tk_ref
%token<uString> tk_tipo_base
%token tk_literal_caracter
%token tk_literal
%token tk_coma
%token tk_ent
%token tk_sal
%token tk_ent_sal

%left tk_suma tk_resta tk_AND tk_OR
%left tk_multiplicacion tk_division tk_modulo tk_div
%left tk_operador_relacional
%left tk_NOT
%right tk_menos_unario

%token tk_parentesis_apertura
%token tk_parentesis_cierre
%token tk_literal_numerico
%token tk_verdadero
%token tk_falso
%token tk_continuar
%token tk_asignacion
%token tk_si
%token tk_fsi
%token tk_entonces
%token tk_sino
%token tk_mientras
%token tk_fmientras
%token tk_hacer
%token tk_para
%token tk_fpara
%token tk_hasta
%token tk_accion
%token tk_faccion
%token tk_funcion
%token tk_ffuncion
%token tk_dev
%token tk_subrango

%type<uString>d_tipo
%type<uListaStrings>lista_id
%type<uExpresion>expresion
%type<uEntero>operando


%%
/* The grammar follows. */

desc_algoritmo:   tk_algoritmo tk_identificador tk_punto_coma cabecera_alg bloque_alg tk_falgoritmo { printf("\tRegla desc_algoritmo\n");}
              ;
                
cabecera_alg:     decl_globales decl_a_f decl_ent_sal tk_precondicion { printf("\tRegla cabecera_alg\n"); }
            ;
                
bloque_alg:       bloque tk_postcondicion { printf("\tRegla bloque_alg\n"); }
          ;
                
decl_globales:    declaracion_tipo decl_globales { printf("\tRegla decl_globales ( -> tipo )\n"); }
            |     declaracion_cte decl_globales { printf("\tRegla decl_globales ( -> cte )\n"); }
            |     %empty { printf("\tRegla decl_globales ( -> epsilon )\n"); }
            ;
                
decl_a_f:         accion_d decl_a_f { printf("\tRegla decl_a_f ( -> accion)\n"); }
        |         funcion_d decl_a_f { printf("\tRegla decl_a_f ( -> funcion)\n"); }
        |         %empty { printf("\tRegla decl_a_f ( -> epsilon)\n"); }
        ;
                
bloque:           declaraciones instrucciones { printf("\tRegla bloque\n"); }
      ;
                
declaraciones:    declaracion_tipo declaraciones { printf("\tRegla delaraciones ( -> tipo )\n"); }
            |     declaracion_cte declaraciones { printf("\tRegla delaraciones ( -> cte )\n"); }
            |     declaracion_var declaraciones { printf("\tRegla delaraciones ( -> var )\n"); }
            |     %empty { printf("\tRegla delaraciones ( -> epsilon )\n"); }
            ;
                
declaracion_tipo: tk_tipo lista_d_tipo tk_ftipo tk_punto_coma { printf("\tRegla declaracion_tipo\n"); }
                ;
                    
declaracion_cte:  tk_const lista_d_cte tk_fconst tk_punto_coma { printf("\tRegla declaracion_cte\n"); }
              ;

declaracion_var:  tk_var lista_d_var tk_fvar tk_punto_coma { printf("\tRegla declaracion_var\n"); }
              ;
                    
lista_d_tipo:     tk_identificador tk_igual d_tipo tk_punto_coma lista_d_tipo { printf("\tRegla lista_d_tipo\n"); }
            |      %empty
            ;
                    
d_tipo:           tk_tupla lista_campos tk_ftupla { 
                        printf("\tRegla d_tipo ( -> tupla )\n");
                        $$ = "tupla"; 
                }
      |           tk_tabla tk_corchete_abierto expresion_t tk_subrango  expresion_t tk_corchete_cerrado tk_de d_tipo {
                        printf("\tRegla d_tipo ( -> tabla )\n");
                        $$ = "tabla"; 
                }
      |           tk_identificador {
                        printf("\tRegla d_tipo ( -> ideidentificador )\n");
                        $$ = strdup($1);
                }
      |           expresion_t tk_subrango expresion_t {
                        printf("\tRegla d_tipo ( -> expresion )\n");
                        $$ = "expresion";
                }
      |           tk_ref d_tipo { printf("\tRegla d_tipo ( -> ref )\n"); }
      |           tk_tipo_base {
                        printf("\tRegla d_tipo ( -> tipo_base )\n");
                        $$ = strdup($1);
                }
      ;
                                                 
expresion_t:      expresion { printf("\tRegla expresion_t ( -> expresion )\n"); }
          |       tk_literal_caracter { printf("\tRegla expresion_t ( -> literal caracter )\n"); }
          ;
                    
lista_campos:     tk_identificador tk_dospuntos d_tipo tk_punto lista_campos { printf("\tRegla lista_campos ( -> identificador )\n"); }
            |     %empty { printf("\tRegla lista_campos ( -> epsilon )\n"); }
            ;
                    
lista_d_cte:     tk_identificador tk_igual tk_literal tk_punto_coma lista_d_cte { printf("\tRegla lista_d_cte ( -> identificador )\n"); }
          |      %empty { printf("\tRegla lista_d_cte ( -> epsilon )\n"); }
          ;
                    
lista_d_var:     lista_id tk_dospuntos d_tipo tk_punto_coma lista_d_var {
                        printf("\tRegla lista_d_var ( -> d_tipo )\n");
                        ListaStrings* listaIdentidicadores = $1;
                        while(listaIdentidicadores->siguiente != NULL){
                                if(buscarSimbolo(listaIdentidicadores->string, tabla_simbolos) == -1){
                                        Simbolo* simb = nuevoSimbolo(strdup(listaIdentidicadores->string), strdup($3));
                                        insertarSimbolo(tabla_simbolos, simb);
                                }
                                listaIdentidicadores = listaIdentidicadores->siguiente;
                        }
                        if(buscarSimbolo(listaIdentidicadores->string, tabla_simbolos) == -1){
                                Simbolo* simb = nuevoSimbolo(strdup(listaIdentidicadores->string), strdup($3));
                                insertarSimbolo(tabla_simbolos, simb);
                        }                
                }
          |      %empty { printf("\tRegla lista_d_var ( -> epsilon )\n"); } 
          ;
                    
lista_id:        tk_identificador tk_coma lista_id {
                        printf("\tRegla lista_id ( -> identificador , lista )\n");
                        ListaStrings* indice = $3;
                        ListaStrings* identificadorIntroducir = (ListaStrings*)malloc(sizeof(ListaStrings));
                        identificadorIntroducir->string = strdup($1);
                        identificadorIntroducir->siguiente = NULL;
                        while(indice->siguiente != NULL){
                                indice = indice->siguiente;
                        }
                        indice->siguiente = identificadorIntroducir;
                        $$ = $3;
                }
        |        tk_identificador {
                        printf("\tRegla lista_id ( -> identificador)\n");
                        $$ = (ListaStrings*)malloc(sizeof(ListaStrings));
                        $$->string = strdup($1);
                        $$->siguiente = NULL;
                }
        |        %empty { printf("\tRegla lista_id ( -> epsilon )\n"); }
        ;
                    
decl_ent_sal:    decl_ent { printf("\tRegla decl_ent_sal ( -> ent )\n"); }
            |    decl_ent decl_sal { printf("\tRegla decl_ent_sal ( -> ent sal )\n"); }
            |    decl_sal { printf("\tRegla decl_ent_sal ( -> sal )\n"); }
            ;
                    
decl_ent:        tk_ent lista_d_var { printf("\tRegla decl_ent\n"); }
        ;
                    
decl_sal:        tk_sal lista_d_var { printf("\tRegla decl_sal\n"); }
        ;
                    
expresion:       funcion_ll { printf("\tRegla expresion (-> funcion_ll)\n"); }
    |            expresion tk_suma expresion {
                        printf("\tRegla expresion (-> suma)\n");
                        int placeO1 = $1->place;
                        int placeO2 = $3->place;
                        char* tipoExpresion1 = strdup($1->tipo);
                        char* tipoExpresion2 = strdup($3->tipo);
                        if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "entero") == 0){
                                $$->tipo = "entero";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_enteros",placeO1, placeO2, $$->place);
                        } else if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO1, -1, $$->place);
                                gen(tabla_cuadruplas, "suma_real",$$->place, placeO2, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "entero") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO2, -1, $$->place);
                                gen(tabla_cuadruplas, "suma_real",placeO1, $$->place, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "suma_real",placeO1, placeO2, $$->place); 
                        }
                }
    |            expresion tk_resta expresion {
                        printf("\tRegla expresion (-> resta)\n");
                        int placeO1 = $1->place;
                        int placeO2 = $3->place;
                        char* tipoExpresion1 = strdup($1->tipo);
                        char* tipoExpresion2 = strdup($3->tipo);
                        if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "entero") == 0){
                                $$->tipo = "entero";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "resta_enteros",placeO1, placeO2, $$->place);
                        } else if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO1, -1, $$->place);
                                gen(tabla_cuadruplas, "resta_real",$$->place, placeO2, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "entero") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO2, -1, $$->place);
                                gen(tabla_cuadruplas, "resta_real",placeO1, $$->place, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "resta_real",placeO1, placeO2, $$->place); 
                        }              
                }
    |            expresion tk_multiplicacion expresion {
                        printf("\tRegla expresion (-> multiplicacion)\n");
                        int placeO1 = $1->place;
                        int placeO2 = $3->place;
                        char* tipoExpresion1 = strdup($1->tipo);
                        char* tipoExpresion2 = strdup($3->tipo);
                        if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "entero") == 0){
                                $$->tipo = "entero";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "multiplicacion_enteros",placeO1, placeO2, $$->place);
                        } else if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO1, -1, $$->place);
                                gen(tabla_cuadruplas, "multiplicacion_real",$$->place, placeO2, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "entero") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO2, -1, $$->place);
                                gen(tabla_cuadruplas, "multiplicacion_real",placeO1, $$->place, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "multiplicacion_real",placeO1, placeO2, $$->place); 
                        }
                }
    |            expresion tk_division expresion {
                        printf("\tRegla expresion (-> division)\n");
                        int placeO1 = $1->place;
                        int placeO2 = $3->place;
                        char* tipoExpresion1 = strdup($1->tipo);
                        char* tipoExpresion2 = strdup($3->tipo);
                        if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "entero") == 0){
                                $$->tipo = "real";
                                Simbolo* aux = newTemp(tabla_simbolos, "real");
                                gen(tabla_cuadruplas, "entero_a_real", placeO1, -1, aux->indice);
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO2, -1, $$->place);
                                gen(tabla_cuadruplas, "division_real",aux->indice, $$->place, $$->place);
                        } else if(strcmp(tipoExpresion1, "entero") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO1, -1, $$->place);
                                gen(tabla_cuadruplas, "division_real",$$->place, placeO2, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "entero") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "entero_a_real", placeO2, -1, $$->place);
                                gen(tabla_cuadruplas, "division_real",placeO1, $$->place, $$->place); 
                        } else if(strcmp(tipoExpresion1, "real") == 0 && strcmp(tipoExpresion2, "real") == 0) {
                                $$->tipo = "real";
                                Simbolo* nuevo = newTemp(tabla_simbolos, "real");
                                $$->place = nuevo->indice;
                                gen(tabla_cuadruplas, "division_real",placeO1, placeO2, $$->place); 
                        }
                }
    |            expresion tk_modulo expresion {
                        printf("\tRegla expresion (-> modulo)\n");
                        if(strcmp($1->tipo, "entero") == 0 && strcmp($3->tipo, "entero") == 0){
                                int placeO1 = $1->place;
                                int placeO2 = $3->place;
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                $$->place = nuevo->indice;
                                $$->tipo = "entero";
                                gen(tabla_cuadruplas, "modulo", placeO1, placeO2, $$->place);
                        }
                }
    |            expresion tk_div expresion {
                        printf("\tRegla expresion (-> div)\n");
                        if(strcmp($1->tipo, "entero") == 0 && strcmp($3->tipo, "entero") == 0){
                                int placeO1 = $1->place;
                                int placeO2 = $3->place;
                                Simbolo* nuevo = newTemp(tabla_simbolos, "entero");
                                $$->place = nuevo->indice;
                                $$->tipo = "entero";
                                gen(tabla_cuadruplas, "division_entera", placeO1, placeO2, $$->place);
                        }
                }
    |            tk_parentesis_apertura expresion tk_parentesis_cierre {
                        printf("\tRegla expresion (-> parentesis)\n");
                        $$->place = $2->place;
                        $$->tipo = $2->tipo; 
                }
    |            operando {
                        printf("\tRegla expresion (-> operando)\n");
                        $$ = (Expresion*)malloc(sizeof(Expresion));
                        $$->place = $1;
		        $$->tipo = consultarTipo(tabla_simbolos, $1);
                }
    |            tk_literal_numerico { printf("\tRegla expresion (-> literal numerico)\n"); }
    |            tk_resta expresion %prec tk_menos_unario { printf("\tRegla expresion (-> menos unario)\n"); }
    |            expresion tk_AND expresion { printf("\tRegla expresion (-> and)\n"); }
    |            expresion tk_OR expresion { printf("\tRegla expresion (-> or)\n"); }
    |            tk_NOT expresion { printf("\tRegla expresion (-> not)\n"); }
    |            tk_verdadero { printf("\tRegla expresion (-> verdadero)\n"); }
    |            tk_falso { printf("\tRegla expresion (-> falso)\n"); }
    |            expresion tk_operador_relacional expresion { printf("\tRegla expresion (-> operador relacional)\n"); }
    ;
                    
operando:        tk_identificador {
                        printf("\tRegla operando (-> identificador)\n");
                        $$ = buscarSimbolo($1, tabla_simbolos);
                }
        |        operando tk_punto operando { printf("\tRegla operando (-> punto)\n"); }
        |        operando tk_corchete_abierto expresion tk_corchete_cerrado { printf("\tRegla operando (-> corchetes)\n"); }
        |        operando tk_ref { printf("\tRegla operando (-> ref)\n"); }
        ;
                    
instrucciones:   instruccion tk_punto_coma instrucciones { printf("\tRegla instrucciones (-> punto y coma)\n"); }
            |    instruccion { printf("\tRegla instrucciones (-> instruccion)\n"); }
            ;
                    
instruccion:     tk_continuar { printf("\tRegla instruccion (-> continuar)\n"); }
          |      asignacion { printf("\tRegla instruccion (-> asignacion)\n"); }
          |      alternativa { printf("\tRegla instruccion (-> alternativa)\n"); }
          |      iteracion { printf("\tRegla instruccion (-> iteracion)\n"); }
          |      accion_ll { printf("\tRegla instruccion (-> accion_ll)\n"); }
          ;
                    
asignacion:      operando tk_asignacion expresion {
                        printf("\tRegla asignacion\n");
                        char* tipoOperando = strdup(consultarTipo(tabla_simbolos, $1));

                        if(strcmp(tipoOperando, $3->tipo) == 0){
                                gen(tabla_cuadruplas, "asignacion", $3->place, -1, $1);
                        } else if (strcmp(tipoOperando, "real") == 0 && strcmp($3->tipo, "entero") == 0){
                                gen(tabla_cuadruplas, "entero_a_real", $3->place, -1, $3->place);
                                gen(tabla_cuadruplas, "asignacion", $3->place, -1, $1);
                        } else  {
                                // Conflicto de tipos ente operando y expresion
                                char* mensaje_error = (char*)malloc(50*sizeof(char));
                                sprintf(mensaje_error, "Conflicto de tipos. %s := %s", tipoOperando, $3->tipo);
                                yyerror(mensaje_error);
                        }
                }
          ;
                    
alternativa:     tk_si expresion tk_entonces instrucciones lista_opciones tk_fsi { printf("\tRegla alternativa\n"); }
          ;
                    
lista_opciones:  tk_sino expresion tk_entonces instrucciones lista_opciones { printf("\tRegla lista_opciones (-> sino)\n"); }
             |   %empty { printf("\tRegla alternativa (-> epsilon)\n"); }
             ;
                    
iteracion:       it_cota_fija { printf("\tRegla iteracion (-> cota fija)\n"); }
         |       it_cota_exp  { printf("\tRegla iteracion (-> cota expresion)\n"); }
         ;
                    
it_cota_exp:     tk_mientras expresion tk_hacer instrucciones tk_fmientras { printf("\tRegla it_cota_exp\n"); }
           ;
                    
it_cota_fija:    tk_para tk_identificador tk_asignacion expresion tk_hasta expresion tk_hacer instrucciones tk_fpara { printf("\tRegla it_cota_fija\n"); }
            ;
                    
accion_d:        tk_accion a_cabecera bloque tk_faccion { printf("\tRegla accion_d\n"); }
        ;
        
funcion_d:       tk_funcion f_cabecera bloque tk_dev expresion tk_ffuncion { printf("\tRegla funcion_d\n"); }
        ;
                    
a_cabecera:      tk_identificador tk_parentesis_apertura d_par_form tk_parentesis_cierre tk_punto_coma { printf("\tRegla a_cabecera\n"); }
          ;
                    
f_cabecera:      tk_identificador tk_parentesis_apertura lista_d_var tk_parentesis_cierre tk_dev d_tipo tk_punto_coma { printf("\tRegla f_cabecera\n"); }
          ;
                    
d_par_form:      d_p_form tk_punto_coma d_par_form { printf("\tRegla d_par_form (-> punto y coma)\n"); }
          |      %empty { printf("\tRegla d_par_form (-> epsilon)\n"); }
          ;
                    
d_p_form:        tk_ent lista_id tk_dospuntos d_tipo { printf("\tRegla d_p_form (-> ent)\n"); }
        |        tk_sal lista_id tk_dospuntos d_tipo { printf("\tRegla d_p_form (-> sal)\n"); }
        |        tk_ent_sal lista_id tk_dospuntos d_tipo { printf("\tRegla d_p_form (-> ent_sal)\n"); }
        ;
                    
accion_ll:       tk_identificador tk_parentesis_apertura l_ll tk_parentesis_cierre { printf("\tRegla accion_ll\n"); }
        ;
                    
funcion_ll:      tk_identificador tk_parentesis_apertura l_ll tk_parentesis_cierre { printf("\tRegla funcion_ll\n"); }
          ;
                    
l_ll:            expresion tk_coma l_ll { printf("\tRegla l_ll (-> coma)\n"); }
    |            expresion { printf("\tRegla l_ll (-> expresion)\n"); }
    ;

%%
int main(void)
{
        tabla_simbolos = nuevaTablaDeSimbolos();
        tabla_cuadruplas = nuevaTablaDeCuadruplas();
        yyparse();
        mostrarTablaDeSimbolos(tabla_simbolos);
        mostrarTablaDeCuadruplas(tabla_cuadruplas);
}
void yyerror (char const *s)
{
        fprintf (stderr, "ERROR[%s]\n", s);
}

