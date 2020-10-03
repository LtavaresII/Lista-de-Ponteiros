#include <stdio.h>
#include <stdlib.h>

float Potencia2(float a){
    return pow(a,2);
}

float RaizQuadrada(float a){
    return sqrt(a);
}


int main()
{
    float b;

    // Potencia de 2
    float (*p2)(float) = &Potencia2;
    printf("Valor = %f \n",p2(34));

    b = p2(34);

    // Raiz Quadrada
    float (*rq)(float) = &RaizQuadrada;
    printf("Valor = %f \n",rq(b));

    return 0;
}
