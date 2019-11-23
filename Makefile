default: flex bison compilar_flex compilar_TablaDeSimbolos compilar_TablaDeCuadruplas compilar_bison

bison: gramatica.y
	bison -v -d gramatica.y
	@echo "-> Generado archivo gramatica.tab.c correctamente"

flex: scanner.l
	flex scanner.l
	@echo "-> Generado archivo lex.yy.c correctamente"

compilar_flex: lex.yy.c
	gcc -c lex.yy.c
	@echo "-> Compilando lex.yy.c correctamente"

compilar_bison: gramatica.tab.c lex.yy.o TablaDeSimbolos.o TablaDeCuadruplas.o
	gcc gramatica.tab.c lex.yy.o TablaDeSimbolos.o TablaDeCuadruplas.o -lfl -lm
	@echo "-> Generado archivo ejecutable a.out correctamente"

compilar_TablaDeSimbolos: TablaDeSimbolos.c
	gcc -c TablaDeSimbolos.c
	@echo "-> Compilando TablaDeSimbolos.c correctamente"

compilar_TablaDeCuadruplas: TablaDeCuadruplas.c
	gcc -c TablaDeCuadruplas.c
	@echo "-> Compilando TablaDeCuadruplas.c correctamente"
	
clean: lex.yy.c a.out lex.yy.o gramatica.tab.c gramatica.output TablaDeSimbolos.o TablaDeCuadruplas.o
	rm lex.yy.c a.out gramatica.tab.c lex.yy.o gramatica.output TablaDeSimbolos.o TablaDeCuadruplas.o
	@echo "-> Se han eliminado los archivos correctamente"

%: default programa%.alg
	@echo "/***************************** Programa$@.alg ***************************************\\"
	./a.out < programa$@.alg
	@echo "\\***************************** Programa$@.alg ***************************************/"

prueba: prueba.c TablaDeCuadruplas.c TablaDeSimbolos.c
	gcc -c TablaDeCuadruplas.c
	gcc -c TablaDeSimbolos.c
	gcc prueba.c TablaDeCuadruplas.o TablaDeSimbolos.o -o prueba.out
	./prueba.out
	rm TablaDeCuadruplas.o TablaDeSimbolos.o prueba.out