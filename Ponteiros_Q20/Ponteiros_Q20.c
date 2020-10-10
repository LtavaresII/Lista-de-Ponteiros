#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "gc.h"
#include <time.h>

int main()
{
	int i;
	clock_t t1,t2;
	GC_INIT();
    // mede o tempo t1
	t1 = clock();
	for(i=0;i<10000000;++i){
		int *p = (int *) GC_MALLOC(sizeof(int));
	}
	t1 = clock()-t1;
	printf("Tempo de execucao do coletor de lixo: %lf \n", ((double)t1)/((CLOCKS_PER_SEC/1000)));
	
	t2 = clock();
    for(i=0;i<10000000;++i){
		int *p=(int *) malloc(sizeof(int));
		free (p);
	}
	t2 = clock()-t2;
	printf("Tempo de execucao do malloc com free: %lf \n", ((double)t2)/((CLOCKS_PER_SEC/1000)));
	
	return 0;
}
