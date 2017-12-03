#include<stdio.h>
#include<stdlib.h>
/* #include<stdlib.h> contiene las variables para los valores de retorno
	EXIT_SUCCESS
	EXIT_FAILURE
	Para cadenas de texto las siguientes representaciones son equivalentes
	"hola" =  {'h','o','l','a','\0'}
*/
int main(void){
	// Variables
	char x = 'x';
	char y1[] = "hola";
	char y2[] = {'h','o','l','a','\0'};
	char *py1;	
	py1 = &(y1[0]);
	// & se llama Ampersand
	// &<var_name> retorna la direccion de memoria de la variable
	//[A]mpersand = [A]ddress (Direccion)
	// *<var_name> variable que recibira una direccion de memoria

	char *z =&x;
	//Cuerpo del programa
	
	int i=0;
	printf("Variables 'y1'\n");
	for(i=0; i<5;i++){
	printf("Caracter [%i]");
        printf(" Valor '%c'     : '%c' \t", y1[i]);
        printf(" Direccion '%x' : '%x' \n", &y1[i]);
	
}

 	printf("Varianle 'py1'\n");
        printf("Valor     :'%c'\n",*py1);
        printf("Direccion :'%x'\n",py1);
	printf("Sumando valores a py1\n");
	for (i=0; i<5;i++){
	printf("py1 + [%i]: {Val : %c, Dir : %x}\n",i,*(py1+i),(py1+i));
}
	/*
	printf("%s\n",y1);
	printf("%s\n",y2);
	printf("%c\n",*z);*/

	//Return
	return 0;//significa que se pudo ejecutar sin problemas elprograma
	
}

