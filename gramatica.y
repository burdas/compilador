/* Infix notation calculator. */

%{
  #include <math.h>
  #include <stdio.h>
  int yylex (void);
  void yyerror (char const *);
%}

/* Bison declarations. */
%token tk_algoritmo
%token tk_identificador
%token tk_punto_coma
%token tk_punto
%token tk_falgoritmo
%token tk_comentario
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
%token tk_tipo_base
%token tk_literal_caracter
%token tk_literal
%token tk_coma
%token tk_ent
%token tk_sal
%token tk_ent_sal
%left tk_suma
%left tk_resta
%left tk_multiplicacion
%left tk_division
%left tk_modulo
%left tk_div
%token tk_parentesis_apertura
%token tk_parentesis_cierre
%token tk_literal_numerico
%left tk_AND
%left tk_OR
%left tk_NOT
%token tk_verdadero
%token tk_falso
%left tk_operador_relacional
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

%%
/* The grammar follows. */

desc_algoritmo:   tk_algoritmo tk_identificador tk_punto_coma cabecera_alg bloque_alg tk_falgoritmo tk_punto { printf("Regla desc_algoritmo") }
              ;
                
cabecera_alg:     decl_globales decl_a_f decl_ent_sal tk_comentario { printf("Regla cabecera_alg") }
            ;
                
bloque_alg:       bloque tk_comentario { printf("Regla bloque_alg") }
          ;
                
decl_globales:    declaracion_tipo decl_globales { printf("Regla decl_globales ( -> tipo )") }
            |     declaracion_cte decl_globales { printf("Regla decl_globales ( -> cte )") }
            |     %empty { printf("Regla decl_globales ( -> epsilon )") }
            ;
                
decl_a_f:         accion_d decl_a_f { printf("Regla decl_a_f ( -> accion)") }
        |         funcion_d decl_a_f { printf("Regla decl_a_f ( -> funcion)") }
        |         %empty { printf("Regla decl_a_f ( -> epsilon)") }
        ;
                
bloque:           declaraciones instrucciones { printf("Regla bloque") }
      ;
                
declaraciones:    declaracion_tipo declaraciones { printf("Regla delaraciones ( -> tipo )") }
            |     declaracion_cte declaraciones { printf("Regla delaraciones ( -> cte )") }
            |     declaracion_var declaraciones {} { printf("Regla delaraciones ( -> var )") }
            |     %empty { printf("Regla delaraciones ( -> epsilon )") }
            ;
                
declaracion_tipo: tk_tipo lista_d_tipo tk_ftipo tk_punto_coma { printf("Regla declaracion_tipo") }
                ;
                    
declaracion_cte:  tk_const lista_d_cte tk_fconst tk_punto_coma { printf("Regla declaracion_cte") }
              ;

declaracion_var:  tk_var lista_d_var tk_fvar tk_punto_coma { printf("Regla declaracion_var") }
              ;
                    
lista_d_tipo:     tk_identificador tk_igual d_tipo tk_punto_coma lista_d_tipo { printf("Regla lista_d_tipo") }
            |      %empty
            ;
                    
d_tipo:           tk_tupla lista_campos tk_ftupla { printf("Regla d_tipo ( -> tupla )") }
      |           tk_tabla tk_corchete_abierto expresion_t tk_dospuntos  expresion_t tk_corchete_cerrado tk_de d_tipo { printf("Regla d_tipo ( -> tabla )") }
      |           tk_identificador { printf("Regla d_tipo ( -> ideidentificador )") }
      |           expresion_t tk_dospuntos expresion_t { printf("Regla d_tipo ( -> expresion )") }
      |           tk_ref d_tipo { printf("Regla d_tipo ( -> ref )") }
      |           tk_tipo_base { printf("Regla d_tipo ( -> tipo_base )") }
      ;
                                                 
expresion_t:      expresion { printf("Regla expresion_t ( -> expresion )") }
          |       tk_literal_caracter { printf("Regla expresion_t ( -> literal caracter )") }
          ;
                    
lista_campos:     tk_identificador tk_dospuntos d_tipo tk_punto lista_campos { printf("Regla lista_campos ( -> identificador )") }
            |     %empty { printf("Regla lista_campos ( -> epsilon )") }
            ;
                    
lista_d_cte:     tk_identificador tk_igual tk_literal tk_punto_coma lista_d_cte { printf("Regla lista_d_cte ( -> identificador )") }
          |      %empty { printf("Regla lista_d_cte ( -> epsilon )") }
          ;
                    
lista_d_var:     lista_id tk_dospuntos tk_identificador tk_punto_coma lista_d_var { printf("Regla lista_d_var ( -> identificador )") }
          |      lista_id tk_dospuntos d_tipo tk_punto_coma lista_d_var { printf("Regla lista_d_var ( -> d_tipo )") }
          |      %empty { printf("Regla lista_d_var ( -> epsilon )") }
          ;
                    
lista_id:        tk_identificador tk_coma lista_id { printf("Regla lista_id ( -> identificador , lista )") }
        |        tk_identificador { printf("Regla lista_id ( -> identificador)") }
        |        %empty { printf("Regla lista_id ( -> epsilon )") }
        ;
                    
decl_ent_sal:    decl_ent { printf("Regla decl_ent_sal ( -> ent )") }
            |    decl_ent decl_sal { printf("Regla decl_ent_sal ( -> ent sal )") }
            |    decl_sal { printf("Regla decl_ent_sal ( -> sal )") }
            ;
                    
decl_ent:        tk_ent lista_d_var { printf("Regla decl_ent") }
        ;
                    
decl_sal:        tk_sal lista_d_var { printf("Regla decl_sal") }
        ;
                    
expresion:       exp_a { printf("Regla expresion (-> exp_a)") }
        |        exp_b { printf("Regla expresion (-> exp_b)") }
        |        funcion_ll { printf("Regla expresion (-> funcion_ll)") }
        ;
                    
exp_a:           exp_a tk_suma exp_a { printf("Regla exp_a (-> suma)") }
    |            exp_a tk_resta exp_a { printf("Regla exp_a (-> resta)") }
    |            exp_a tk_multiplicacion exp_a { printf("Regla exp_a (-> multiplicacion)") }
    |            exp_a tk_division exp_a { printf("Regla exp_a (-> division)") }
    |            exp_a tk_modulo exp_a { printf("Regla exp_a (-> modulo)") }
    |            exp_a tk_div exp_a { printf("Regla exp_a (-> div)") }
    |            tk_parentesis_apertura exp_a tk_parentesis_cierre { printf("Regla exp_a (-> parentesis)") }
    |            operando { printf("Regla exp_a (-> operando)") }
    |            tk_literal_numerico { printf("Regla exp_a (-> literal numerico)") }
    |            tk_resta exp_a { printf("Regla exp_a (-> menos unario)") }
    ;
                    
exp_b:           exp_b tk_AND exp_b { printf("Regla exp_b (-> and)") }
    |            exp_b tk_OR exp_b { printf("Regla exp_b (-> or)") }
    |            tk_NOT exp_b { printf("Regla exp_b (-> not)") }
    |            operando { printf("Regla exp_b (-> operando)") }
    |            tk_verdadero { printf("Regla exp_b (-> verdadero)") }
    |            tk_falso { printf("Regla exp_b (-> falso)") }
    |            expresion tk_operador_relacional expresion { printf("Regla exp_b (-> operador relacional)") }
    |            tk_parentesis_apertura exp_b tk_parentesis_cierre { printf("Regla exp_b (-> parentesis)") }
    ;
                    
operando:        tk_identificador { printf("Regla operando (-> identificador)") }
        |        operando tk_punto operando { printf("Regla operando (-> punto)") }
        |        operando tk_corchete_abierto expresion tk_corchete_cerrado { printf("Regla operando (-> corchetes)") }
        |        operando tk_ref { printf("Regla operando (-> ref)") }
        ;
                    
instrucciones:   instruccion tk_punto_coma instrucciones { printf("Regla instrucciones (-> punto y coma)") }
            |    instruccion { printf("Regla instrucciones (-> instruccion)") }
            ;
                    
instruccion:     tk_continuar { printf("Regla instruccion (-> continuar)") }
          |      asignacion { printf("Regla instruccion (-> asignacion)") }
          |      alternativa { printf("Regla instruccion (-> alternativa)") }
          |      iteracion { printf("Regla instruccion (-> iteracion)") }
          |      accion_ll { printf("Regla instruccion (-> accion_ll)") }
          ;
                    
asignacion:      operando tk_asignacion expresion { printf("Regla asignacion") }
          ;
                    
alternativa:     tk_si expresion tk_entonces instrucciones lista_opciones tk_fsi { printf("Regla alternativa") }
          ;
                    
lista_opciones:  tk_sino expresion tk_entonces instrucciones lista_opciones { printf("Regla lista_opciones (-> sino)") }
             |   %empty { printf("Regla alternativa (-> epsilon)") }
             ;
                    
iteracion:       it_cota_fija { printf("Regla iteracion (-> cota fija)") }
         |       it_cota_exp  { printf("Regla iteracion (-> cota expresion)") }
         ;
                    
it_cota_exp:     tk_mientras expresion tk_hacer instrucciones tk_fmientras { printf("Regla it_cota_exp") }
           ;
                    
it_cota_fija:    tk_para tk_identificador tk_asignacion expresion tk_hasta expresion tk_hacer instrucciones tk_fpara { printf("Regla it_cota_fija") }
            ;
                    
accion_d:        tk_accion a_cabecera bloque tk_faccion { printf("Regla accion_d") }
        ;
        
funcion_d:       tk_funcion f_cabecera bloque tk_dev expresion tk_ffuncion { printf("Regla funcion_d") }
        ;
                    
a_cabecera:      tk_identificador tk_parentesis_apertura d_par_form tk_parentesis_cierre tk_punto_coma { printf("Regla a_cabecera") }
          ;
                    
f_cabecera:      tk_identificador tk_parentesis_apertura lista_d_var tk_parentesis_cierre tk_dev d_tipo tk_punto_coma { printf("Regla f_cabecera") }
          ;
                    
d_par_form:      d_p_form tk_punto_coma d_par_form { printf("Regla d_par_form (-> punto y coma)") }
          |      %empty { printf("Regla d_par_form (-> epsilon)") }
          ;
                    
d_p_form:        tk_ent lista_id tk_dospuntos d_tipo { printf("Regla d_p_form (-> ent)") }
        |        tk_sal lista_id tk_dospuntos d_tipo { printf("Regla d_p_form (-> sal)") }
        |        tk_ent_sal lista_id tk_dospuntos d_tipo { printf("Regla d_p_form (-> ent_sal)") }
        ;
                    
accion_ll:       tk_identificador tk_parentesis_apertura l_ll tk_parentesis_cierre { printf("Regla accion_ll") }
        ;
                    
funcion_ll:      tk_identificador tk_parentesis_apertura l_ll tk_parentesis_cierre { printf("Regla funcion_ll") }
          ;
                    
l_ll:            expresion tk_coma l_ll { printf("Regla l_ll (-> coma)") }
    |            expresion { printf("Regla l_ll (-> expresion)") }
    ;

%%

/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input. */

#include <ctype.h>


int
yylex (void)
{
  int c = getchar ();
  /* Skip white space. */
  while (c == ' ' || c == '\t')
    c = getchar ();

  /* Process numbers. */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      scanf ("%lf", &yylval);
      return NUM;
    }

  /* Return end-of-input. */
  else if (c == EOF)
    return 0;
  /* Return a single char. */
  else
    return c;
}

int
main (void)
{
  return yyparse ();
}

#include <stdio.h>

/* Called by yyparse on error. */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}

