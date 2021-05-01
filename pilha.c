#include <stdio.h>
#define max 10

int v[max],qtd=0;

void inserir(int n){ 
    if(qtd==max){
        printf("Vetor cheio!\n");
    }else{
        v[qtd] = n;
        qtd++;
        printf("Elemmento inserido com sucesso!\n");
    }
}

void exibirPilha(){ 
	int i;
	printf("Formato pilha.\n");
	for(i=qtd-1;i>=0;i--){
		printf("v[%d] = %d \n",i,v[i]);
	}
}

void excluir(){ 
    if(qtd==0){
        printf("Nao ha nenhum elemento no vetor!\n");
    }else{
        qtd--;
    }
}

main(){
	inserir(14);
    inserir(22);
    inserir(32);
    inserir(2);
    inserir(50);
    exibirPilha();
    excluir();
    excluir();
    exibirPilha();

}
