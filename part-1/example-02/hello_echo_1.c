#include<stdio.h>
int main (int argc, char *argv[]) {
	/*
		argc : es el numero de argumentos que recibe nuestro programa cuando es llamado desde la linea de comandos
			y desde cualquier otro lado
	
			El primer argumento es el nombre del ejecutable, por lo cual, si no le pasamos argumentos al programa
			nos imprimira 1
			
		argv : contiene los valores de los argumentos ingresados por linea de comandos (y desde cualquier otro lado)

		notas : las expresiones como "%d", "%s" son especificadores de formato
			(format specifiers)		
	
	
	*/
	for(int i = 1; i<argc; i++){
	printf("%i\t", i); //i for int
        printf("%s\n", argv[i]); //s for string	
	}

}
