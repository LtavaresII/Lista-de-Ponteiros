#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000

// Questão 15
int RandomInteger(int low, int high)
{
    int k;
    srand( (unsigned)time(NULL) );
    k = (rand() % high) + low;
    return k;
}

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
}

int main()
{
    clock_t t;
    int a,p,r;
    p = 0;
    r = TAM;
    int *x;

    x= malloc(r *sizeof(int));

    for(a = 0; a < r; a++){
        x[a] = RandomInteger(p, r);
    }

    t = clock();
    Ordenar(x,r,Comparar);
    t = clock() - t;
    printf("Tempo de execucao: %lf \n", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double

    return 0;
}
