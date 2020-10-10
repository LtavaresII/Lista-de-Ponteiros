#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "gc.h"

void comparar(int vetor[], int n){
    int a, b, aux;

    for (a = 1; a < n; a++) {
        for (b = 0; b < n - 1; b++) {
            if (vetor[b] > vetor[b + 1]) {
                aux = vetor[b];
                vetor[b] = vetor[b + 1];
                vetor[b + 1] = aux;
                }
            }
        }

    for (a = 0; a < n; a++) {
        printf("%d ",vetor[a]);
    }
}

int main(){

    int n,i;
    GC_INIT();
    int *x = (int*) GC_MALLOC(sizeof(int));
    
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);


    printf("Valores do Vetor: ");
    for(i=0 ; i<n ; i++){
        scanf("%d",&x[i]);
    }

    printf("Vetor Incial: \n");
    for(i=0 ; i<n ; i++){
        printf("%d ",x[i]);
    }

    printf("\nVetor Ordenado: \n");
    comparar(x,n);

    return 0;
}
