#include <stdio.h>

int main()
{
    int vet[] = {4,9,13};
    int i;

    printf("Valor de uma Posicao: \n");
    for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
    }

    printf("\nEndereco de uma Posicao: \n");
    for(i=0;i<3;i++){
    printf("%X ",vet+i);
    }

    printf("\n");

    return 0;
}
