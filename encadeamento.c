#include<stdlib.h>

struct celula{
	int conteudo;
	struct celula *prox;
};

typedef struct celula Celula;

main(){
	Celula *cabeca;
	cabeca = malloc(sizeof(Celula));
	cabeca->prox = NULL;
	
	Celula *nova;
	nova = malloc(sizeof(Celula));
	nova->conteudo = 5;
	nova->prox = cabeca->prox;
	
	cabeca->prox = nova;
}
