#include <stdlib.h>
#include <stdio.h>
#include "listaE.h"

Celula *inserir(int x,Celula *ini){
	Celula *nova = malloc(sizeof(Celula));
	nova->conteudo = x;
	nova->prox = ini;
	return nova;
}

void exibir(Celula *ini){
	Celula *p;
	for(p = ini; p != NULL; p = p->prox){
		printf("%d\n",p->conteudo);
	}
}

Celula *excluir(Celula *ini){
	Celula *morta = ini;
	ini= morta->prox;
	free(morta);
	return ini;
}
