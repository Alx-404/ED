#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "arvore.h"

Arv *criar(char c,Arv *sae,Arv *sad){
	Arv *nova = malloc(sizeof(Arv));
	nova->conteudo = c;
	nova->esq = sae;
	nova->dir = sad;
}

void exibir(Arv *a){
	if(a!=NULL){
		printf("<%c",a->conteudo);
		exibir(a->esq);
		exibir(a->dir);
		printf(">");
	}else{
		printf("<>");
	}
}
