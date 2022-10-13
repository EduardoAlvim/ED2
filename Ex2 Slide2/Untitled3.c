#include <stdio.h>
#include <stdlib.h>
#include "Untitled2.h"

void criarpilha(pilha p)
{
    p.topo=-1;
}

void empilhar (pilha p, int d)
{
    p.topo++;
    p.dados[p.topo] = d;
}

int desempilhar (pilha p)
{
    int aux = p.dados[p.topo];
    p.topo--;
    return aux;
}

void transformaBin(pilha p, int num){
    int aux;
    while(num>=1){
        aux= num/2;
        *p.empilhar(p,aux);
        num=num/2;
    }
}
