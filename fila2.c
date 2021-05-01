#include <stdio.h>
#define max 10

//Uma outra forma de excluir e exibir dados em uma fila (o método de inserção é o mesmo).

int v[max],qtd=0,xqtd=0; // qtd=tail xqtd=head

void inserir(int n){ 
    if(qtd==max){
        printf("Vetor cheio!\n");
    }else{
        v[qtd] = n;
        qtd++;
        printf("Elemento inserido com sucesso!\n");
    }
}

void excluirInicio2(){
    if (xqtd==qtd) printf("Vetor ja esta vazio.\n");
    else xqtd++;
}

void exibirFila2(){ 
    int i;
    printf("Formato fila.\n");
    for (i=xqtd;i<qtd;i++){ 
        printf("v[%d]=%d  ",i,v[i]);
    }
}

main(){
	inserir(14);
    inserir(22);
    inserir(32);
    inserir(2);
    inserir(50);
    exibirFila2();
    excluirInicio2();
    excluirInicio2();
    exibirFila2();

}
