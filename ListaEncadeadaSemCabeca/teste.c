#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"

main(){
	Celula *lista;
	lista = NULL;
	lista = inserir(3,lista);
	lista = inserir(5,lista);
	lista = inserir(10,lista);
	printf("\nAntes de excluir:\n");
	exibir(lista);
	lista = excluir(lista);
	printf("\nDepois de excluir:\n");
	exibir(lista);
}
