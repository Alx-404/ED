#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"

main(){
	Celula *lista;
	lista = malloc(sizeof(Celula));
	lista->prox = NULL;
	inserir(3,lista);
}
