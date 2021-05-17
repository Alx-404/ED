struct celula{
	int conteudo;
	struct celula *prox;
};

typedef struct celula Celula;

void inserir(int x,Celula *ini);
