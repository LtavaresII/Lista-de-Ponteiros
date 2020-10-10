#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void SomaVetor(int n, int *x, int *y, int *z){
    int i;
    for(i=0 ; i<n ; i++){
        z[i] = x[i]+y[i];
    }
    for(i=0 ; i<n ; i++){
        printf("%d ",z[i]);
    }
}

int main()
{
    int n, i;
    int *x,*y,*z;

    printf("Tamanho do Vetor: ");
    scanf("%d",&n);

    x=malloc(n *sizeof(int));
    y=malloc(n *sizeof(int));
    z=malloc(n *sizeof(int));

    printf("Valores do Vetor X: ");
    for(i=0 ; i<n ; i++){
        scanf("%d",&x[i]);
    }

    printf("Valores do Vetor Y: ");
    for(i=0 ; i<n ; i++){
        scanf("%d",&y[i]);
    }
    printf("Vetor Soma (Z): ");
    SomaVetor(n,x,y,z);

    return 0;
}
