#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
    if(*(float*)a-*(float*)b >= 1){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
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

    qsort(x, n, sizeof(int), comparar);
    printf("\nVetor Ordenado: \n");

    for(i=0 ; i<n ; i++){
        printf("%f ",x[i]);
    }
    return 0;
}
