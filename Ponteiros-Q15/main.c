#include <stdio.h>
#include <stdlib.h>

int Comparar(int *a, int *b){
    if(*(int*)a>*(int*)b){
        return 1;
    }else if(*(int*)b>*(int*)a){
        return -1;
    }else{
        return 0;
    }
}

void Ordenar(int *x, int n, int (*Comparar)(int*,int*)){
    int i,j, aux;
    if(Comparar >0){
        for (i = 1; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                if (x[j] > x[j + 1]) {
                    aux = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = aux;
                    }
                }
            }
    }

    for (i = 0; i < n; i++) {
        printf("%d ",x[i]);
    }

}

int main()
{
    int n,i;
    int *x;
    printf("Tamanho do Vetor: ");
    scanf("%d",&n);

    x= malloc(n *sizeof(int));

    printf("Valores do Vetor: ");
    for(i=0 ; i<n ; i++){
        scanf("%d",&x[i]);
    }

    printf("Vetor Incial: \n");
    for(i=0 ; i<n ; i++){
        printf("%d ",x[i]);
    }

    printf("\nVetor Ordenado: \n");
    Ordenar(x,n,Comparar);
    
    free(x);

    return 0;
}
