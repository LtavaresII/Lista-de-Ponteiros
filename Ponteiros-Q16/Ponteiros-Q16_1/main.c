#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10000

// Questão 14
int RandomInteger(int low, int high)
{
    int k;
    srand( (unsigned)time(NULL) );
    k = (rand() % high) + low;
    return k;
}

int comparar(const void *a, const void *b){
    if(*(float*)a-*(float*)b >= 1){
        return 1;
    }else{
        return 0;
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
    qsort(x, r, sizeof(int), comparar);
    t = clock() - t;
    printf("Tempo de execucao: %lf \n", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
    
    free(x);
    
    return 0;
}
