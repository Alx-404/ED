#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cabecalho.h"

Celula *criaCelula(int n,Celula *p){
	Celula *x;
	x = malloc (sizeof(Celula));
	x->w = n;
	x->prox = p;
	return x;
}

CelGrafo *criaCelGrafo (int n, Celula *p,CelGrafo *g){
	CelGrafo *x;
	x = malloc (sizeof(CelGrafo));
	x->v = n;
	x->adj = p;
	x->prox = g;
	return x;
}

void addAresta(CelGrafo *g,int origem,int d){
	CelGrafo *p = g;
	while(p != NULL && p->v != origem){
		p = p ->prox;
	}
	Celula *l = p->adj;
	p->adj = criaCelula(d,l);
}

void percorreListaAdj(CelGrafo *g){
	while(g!=NULL){
		printf("\n\n Vertice: %d",g->v);
		while(g->adj != NULL){
			printf("\n De %d para %d",g->v,g->adj->w);
			g->adj = g->adj->prox;
		}
		g=g->prox;
	}
	
}
