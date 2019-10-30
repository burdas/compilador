default: flex compilar

flex: scanner.l
	flex scanner.l
	@echo "-> Generado archivo lex.yy.c correctamente"
compilar: lex.yy.c
	gcc lex.yy.c -lfl
	@echo "-> Generado archivo ejecutable a.out correctamente"
clean: lex.yy.c a.out
	rm lex.yy.c a.out
	@echo "-> Se han eliminado "lex.yy.c" y "a.out" correctamente"

%: flex compilar programa%.alg
	@echo "/***************************** Programa$@.alg ***************************************/"
	./a.out programa$@.alg
	@echo "/************************************************************************************/"