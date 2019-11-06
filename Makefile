default: flex bison compilar_flex compilar_bison

bison: gramatica.y
	bison -v -d gramatica.y
	@echo "-> Generado archivo gramatica.tab.c correctamente"

flex: scanner.l
	flex scanner.l
	@echo "-> Generado archivo lex.yy.c correctamente"
compilar_flex: lex.yy.c
	gcc -c lex.yy.c
	@echo "-> Compilando lex.yy.c correctamente"
compilar_bison: gramatica.tab.c lex.yy.o
	gcc gramatica.tab.c lex.yy.o -lfl -lm
	@echo "-> Generado archivo ejecutable a.out correctamente"
clean: lex.yy.c a.out lex.yy.o gramatica.tab.c
	rm lex.yy.c a.out gramatica.tab.c lex.yy.o
	@echo "-> Se han eliminado los archivos correctamente"

%: default programa%.alg
	@echo "/***************************** Programa$@.alg ***************************************/"
	./a.out programa$@.alg
	@echo "/************************************************************************************/"