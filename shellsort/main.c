#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t clock(void);

void shellSort(int *vet[], int size) {
    int i, j, value;

    int h = 1;
    while(h < size) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < size; i++) {
            value = vet[i];
            j = i;
            while (j > h-1 && value <= vet[j - h]) {
                vet[j] = vet[j - h];
                j = j - h;
            }
            vet[j] = value;
        }
        h = h/3;
    }
}

void main()
{
    clock_t start_t, end_t;
    int vetor[100000], tam;
    double total_t;
    FILE *numeros;
    /////////
    start_t = clock();
    numeros = fopen("1000N.txt", "r");
    for(int i=0; i<1000;i++){
        fscanf(numeros,"%d",&vetor[i]);
    }
    fclose(numeros);
    shellSort(vetor, 1000);
    printf("\n");
        printf("[");
    for(int i=0; i<1000;i++){
        printf("%d,",vetor[i]);
    }
    end_t = clock();
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("\nTotal time taken by CPU: %lf\n", total_t  );
    system("pause");
    /////
    start_t = clock();
    numeros = fopen("10000N.txt", "r");
    for(int i=0; i<10000;i++){
        fscanf(numeros,"%d",&vetor[i]);
    }
    fclose(numeros);
    shellSort(vetor, 10000);
    printf("\n");
        printf("[");
    for(int i=0; i<10000;i++){
        printf("%d,",vetor[i]);
    }
    end_t = clock();
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("\nTotal time taken by CPU: %lf\n", total_t  );
    system("pause");
    /////
    start_t = clock();
    numeros = fopen("100000N.txt", "r");
    for(int i=0; i<100000;i++){
        fscanf(numeros,"%d",&vetor[i]);
    }
    fclose(numeros);
    shellSort(vetor, 100000);
    printf("\n");
        printf("[");
    for(int i=0; i<100000;i++){
        printf("%d,",vetor[i]);
    }
    end_t = clock();
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("\nTotal time taken by CPU: %lf\n", total_t  );
    system("pause");
}
