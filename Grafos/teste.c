#include <stdlib.h>
#include <string.h>
#include "cabecalho.h"

main(){
	CelGrafo *g = NULL;
	
	g = criaCelGrafo(1,NULL,g);
	g = criaCelGrafo(2,NULL,g);
	g = criaCelGrafo(3,NULL,g);
	
	addAresta(g,1,2);
	addAresta(g,1,3);
	
	addAresta(g,2,3);
	
	addAresta(g,3,1);
	
	percorreListaAdj(g);
}
