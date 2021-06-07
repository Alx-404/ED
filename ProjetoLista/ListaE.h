struct celula{
	int conteudo;
	struct celula *prox;
};

typedef struct celula Celula;

void inserir(int x,Celula *ini);
void exibir(Celula *ini);
void excluir(Celula *ini);
