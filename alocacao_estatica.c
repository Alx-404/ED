#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char frase[50];
	char copia[50];
	
	printf("Informe uma frase: ");
	scanf("%49[^\n]s",frase); 
	
	strcpy(copia,frase);
	
	printf("Copia da frase: %s",copia);
	
	}
