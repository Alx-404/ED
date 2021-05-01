#include <stdio.h>

main(){
    int a=5;
    int *ptr;
    
    ptr=&a;
    
	printf("Valor de a: %d - Conteudo de prt: %d \n\n",a,*ptr);
	a=10;
	printf("Valor de a: %d - Conteudo de prt: %d \n\n",a,*ptr);
	*ptr=2;
	printf("Valor de a: %d - Conteudo de prt: %d \n\n",a,*ptr);
	printf("Endereço de a: %p \n\n",&a);
	printf("Apontador de a: %p \n\n",ptr);
	printf("Endereço de ptr: %p \n\n",&ptr);
}
