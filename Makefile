default: flex compilar

bison: gramatica.y
	bison gramatica.y

flex: scanner.l
	flex scanner.l
	@echo "-> Generado archivo lex.yy.c correctamente"
compilar: lex.yy.c
	gcc lex.yy.c -lfl
	@echo "-> Generado archivo ejecutable a.out correctamente"
clean: lex.yy.c a.out gramatica.tab.c
	rm lex.yy.c a.out gramatica.tab.c
	@echo "-> Se han eliminado los archivos correctamente"

%: flex compilar programa%.alg
	@echo "/***************************** Programa$@.alg ***************************************/"
	./a.out programa$@.alg
	@echo "/************************************************************************************/"