struct celula{
	int conteudo;
	struct celula *prox;
};

typedef struct celula Celula;

Celula *inserir(int x,Celula *ini);
void exibir(Celula *ini);
Celula *excluir(Celula *ini);



