#include <stdio.h>
#include <string.h>

char *Pesquisa(char *f,char c){
	while(*f != '\0'){
		if(*f == c){
			return f;
		}
		f++;
	}
}

char *PrimeiraVogal(char *s){
	char vogais[] ="aeiouAEIOU";
	int i;
	for (i=0; s[i] != '\0'; i++){
		if(Pesquisa(vogais,s[i]) != NULL){ //podemos usar a funcao strchr(vogais,s[i]) da bliblioteca string.h
			printf("Posicao da vogal na frase: %d\n",i);
			return &s[i];
		}
	}
	return NULL;

}


main(){
	char frase[]="primeira vogal";
	char *ptr;

	ptr = PrimeiraVogal(frase);
	
	if(ptr != NULL){
		printf("Vogal encontrada no endereco %p.",ptr);
	}else{
		printf("A frase informada nao possui vogal.");
	}
	

	
}



