#include <stdio.h>
#include <stdlib.h>
#include "Untitled2.h"

int main()
{
    pilha p;
    criarpilha(p);
    int num, vetBin[100];
    printf("\nDigite um numero inteiro de 0 a 1023: ");
    scanf("%d",&num);
    if(num<0 || num>1023){
        printf("\nNumero invalido");
    }
    else{
        transformaBin(p,num);
        int cont=0;
        while(p.topo > -1){
            vetBin[cont]=desempilhar(p);
            cont++;
        }
    }
    return 0;
}
