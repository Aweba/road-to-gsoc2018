#include<stdio.h>
int main (int argc, char *argv[]) {
	/*
		argc : es el numero de argumentos que recibe nuestro programa cuando es llamado desde la linea de comandos
			y desde cualquier otro lado	
			El primer argumento es el nombre del ejecutable, por lo cual, si no le pasamos argumentos al programa
			nos imprimira 1
		argv : contiene los valores de los argumentos ingresados por linea de comandos (y desde cualquier otro lado)
			los argumentos ingresados son separados por espacios siempre y cuando estos no esten entre comillas o no
			sean escapados ("\<espacios>")
			 los argumentos son ordenados en una lista de la siguiente forma
			arg[0] : nombre del programa
			arg[1] : argumento-1
		notas : las expresiones como "%d", "%s" son especificadores de formato
			(format specifiers)		
			las expresiones como "\t" o "\n" se conocen comos ecuencias de escape
			las expresiones como:
			int i =1;
			int argc;
char *argv[];
son declaraciones de variables
[modificador] <tipo> <nombre_de_var>
	*/
	for(int i = 1; i<argc; i++){
	printf("%i\t", i); //i for int
        printf("%s\n", argv[i]); //s for string	
	}
}
