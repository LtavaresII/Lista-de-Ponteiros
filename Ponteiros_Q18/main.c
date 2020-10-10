#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void MultiplicarMatriz(int *A, int *B, int *C, int nla, int nca, int ncb){
    int i,j,k;

    if(nla == nca){
        for(i=0;i<nla;i++){
            for(j=0;j<nca;j++){
                C[(i*ncb)+j]=0;
                for(k=1;k<nca;k++){
                    C[(i*ncb)+j] =C[(i*ncb)+j]+A[(i*nca)+k]*B[(k*ncb)+j];
                }
            }
        }
    }
    printf("Valores da Matriz A: ");
    for(i=0;i<nla;i++){
        for(j=0;j<nca;j++){
            printf("%d ",A[(i*nca)+j]);
        }
    }

    printf("Valores da Matriz B: ");
    for(i=0;i<nca;i++){
        for(j=0;j<ncb;j++){
            printf("%d ",B[(i*ncb)+j]);
        }
    }

    printf("Valores da Matriz C: ");
    for(i=0;i<nca;i++){
        for(j=0;j<ncb;j++){
            printf("%d ",C[(i*ncb)+j]);
        }
    }

}

int main()
{
    int nla, nca, ncb, i, j;
    int *A, *B, *C;

    printf("Numero de linhas em A: ");
    scanf("%d",&nla);
    printf("Numero de colunas em A: ");
    scanf("%d",&nca);
    printf("Numero de colunas em B: ");
    scanf("%d",&ncb);

    A=(int*) calloc((nla*nca),sizeof(int));
    printf("Valores da Matriz A: ");
    for(i=0;i<nla;i++){
        for(j=0;j<nca;j++){
            scanf("%d", &A[(i*nca)+j]);
        }
    }

    B=(int*) calloc((nca*ncb),sizeof(int));
    printf("Valores da Matriz B: ");
    for(i=0;i<nca;i++){
        for(j=0;j<ncb;j++){
            scanf("%d", &B[(i*ncb)+j]);
        }
    }

    C= (int*) calloc((nla*ncb),sizeof(int));

    MultiplicarMatriz(A, B, C, nla, nca, ncb);

    free(C);
    free(B);
    free(A);

    return 0;
}
