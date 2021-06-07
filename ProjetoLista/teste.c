#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"

main(){
	Celula *lista;
	lista = malloc(sizeof(Celula));
	lista->prox = NULL;
	inserir(3,lista);
	inserir(5,lista);
	inserir(10,lista);
	printf("\nAntes de excluir:\n");
	exibir(lista);
	excluir(lista);
	printf("\nDepois de excluir:\n");
	exibir(lista);
}
