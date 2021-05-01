#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
	char frase[50];
	char *ptr;
	
	printf("Informe uma frase: ");
	scanf("%49[^\n]s",frase);
	
	//Alocamos um espaço na memória com o comprimento da frase digitada e guardamos o endereço deste em ptr
	ptr = (char*)malloc(strlen(frase)+1);
	
	if(ptr == NULL){
		printf("Memoria insuficiente! \n");
	}else{
		strcpy(ptr,frase);
		printf("Copia da frase: %s \n",ptr);
	}
	
	//Libera o espaço alocado anteriormente
	free(ptr);
	
}
