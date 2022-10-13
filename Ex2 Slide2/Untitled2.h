#ifndef PILHA1_H_INCLUDED
#define PILHA1_H_INCLUDED

struct Pilha
{
    int topo;
    int dados[100];
};

typedef struct Pilha pilha;

void criarpilha(pilha *p);
void empilhar (pilha *p, int d);
int desempilhar (pilha *p);
void transformaBin(pilha*p, int num)
 #endif
