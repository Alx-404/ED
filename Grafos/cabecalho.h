typedef struct celula{
	int w;
	struct celula *prox;
}Celula;

typedef struct celGrafo{
	int v;
	Celula *adj;
	struct celGrafo *prox;
}CelGrafo;

Celula *criaCelula(int n, Celula *p);
CelGrafo *criaCelGrafo(int n,Celula *p,CelGrafo *g);
void percorreListaAdj(CelGrafo *g);
void addAresta(CelGrafo *g,int origem,int d);
