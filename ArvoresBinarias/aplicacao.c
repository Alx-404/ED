#include <string.h>
#include "arvore.h"

main(){
	Arv *a1 = criar('d',NULL,NULL);
	Arv *a2 = criar('b',NULL,a1);
	Arv *a3 = criar('e',NULL,NULL);
	Arv *a4 = criar('f',NULL,NULL);
	Arv *a5 = criar('c',a3,a4);
	Arv *a = criar('a',a2,a5);
	
	exibir(a);
}
