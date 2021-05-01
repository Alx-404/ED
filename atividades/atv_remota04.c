#include <stdio.h>
#include <string.h>

char *PrimeiraVogal(char *s){
	int i,j;
	char vogais[] ="aeiouAEIOU";
	
	for( i=0; i<strlen(s); i++ ){
		for ( j=0; j<strlen(vogais); j++){
			if(s[i]==vogais[j]){
				return &s[i];
			}
		}				
	}
	return NULL;
}


main(){
	char palavra[10];
	
	printf("Digite algo: ");
	gets(palavra);
	
	printf("endereco: %p ",PrimeiraVogal(palavra));
	
}
