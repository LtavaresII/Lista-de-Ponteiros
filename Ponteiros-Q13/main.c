#include <stdio.h>
#include <stdlib.h>

void comparar(float vetor[], int n){
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
        printf("%f ",vetor[a]);
    }
}

int main(){
    int n,i;
    float *x;
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);

    x= malloc(n *sizeof(int));

    printf("Valores do Vetor: ");
    for(i=0 ; i<n ; i++){
        scanf("%f",&x[i]);
    }

    printf("Vetor Incial: \n");
    for(i=0 ; i<n ; i++){
        printf("%f ",x[i]);
    }

    printf("\nVetor Ordenado: \n");
    comparar(x,n);

    return 0;
}
