#include <stdlib.h>
#include <stdio.h>
#include "listaE.h"

void inserir(int x,Celula *ini){
	Celula *nova;
	nova = malloc(sizeof(Celula));
	nova->conteudo = x;
	nova->prox = ini->prox;
	ini->prox = nova;
}

void exibir(Celula *ini){
	Celula *p;
	for(p = ini->prox; p != NULL; p= p->prox){
		printf("%d\n",p->conteudo);
	}
}

void excluir(Celula *ini){
	Celula *morta;
	morta = ini->prox;
	ini->prox = morta->prox;
	free(morta);
}
