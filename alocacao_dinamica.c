#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char frase[50];
	char *ptr;
	
	printf("Informe uma frase: ");
	scanf("%49[^\n]s",frase);
	
	//Alocamos um espa�o na mem�ria com o comprimento da frase digitada e guardamos o endere�o deste em ptr
	ptr = (char*)malloc(strlen(frase)+1);
	
	if(ptr == NULL){
		printf("Memoria insuficiente! \n");
	}else{
		strcpy(ptr,frase);
		printf("Copia da frase: %s \n",ptr);
	}
	
	//Libera o espa�o alocado anteriormente
	free(ptr);
	
}
