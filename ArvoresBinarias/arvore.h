struct arv{
	char conteudo;
	struct arv *esq;
	struct arv *dir;
};

typedef struct arv Arv;

Arv *criar(char c,Arv *sae,Arv *sad);
void exibir(Arv *a);
