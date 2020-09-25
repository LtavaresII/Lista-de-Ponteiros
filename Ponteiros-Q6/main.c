#include <stdio.h>

int main()
{
    int pulo[5] = {1,2,3,4,5};

    printf("Valor da posicao 3: %d,\nValor da posicao 5: %d,\nEndereco da posicao 5: %x,\nEndereco da posicao 3: %x,\n",*(pulo + 2),*(pulo + 4),pulo + 4,pulo + 2);
    return 0;
}
