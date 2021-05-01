#include <stdio.h>
#define max 10

int v[max],qtd=0;

void inserir(int n){ 
    if(qtd==max){
        printf("Vetor cheio!\n");
    }else{
        v[qtd] = n;
        qtd++;
        printf("Elemento inserido com sucesso!\n");
    }
}

void exibirFila(){ 
    int i;
    printf("Formato fila.\n");
    for (i=0;i<qtd;i++){ 
        printf("v[%d]=%d  ",i,v[i]);
    }
}

void excluirInicio(){ 
    int i;
    for (i=0;i<qtd;i++){
        v[i]=v[i+1];
    }
    qtd--;
}

main(){
	inserir(14);
    inserir(22);
    inserir(32);
    inserir(2);
    inserir(50);
    exibirFila();
    excluirInicio();
    excluirInicio();
    exibirFila();

}
