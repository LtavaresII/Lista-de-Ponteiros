#include <stdio.h>

int main()
{
    int mat[4] = {1,2,3,4};
    int *p, x;

    p = mat + 1;
   // p = mat++;
   // p = ++mat;
    x = (*mat)++;

    printf("p:%x\nx:%d\n",p,x);
    return 0;
}
