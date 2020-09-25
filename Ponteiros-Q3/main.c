#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =3, j=4;
    int *p,*q;

    //ilegal
    //p = i;
    q = &j;
    p = &*&i;
    //ilegal
    //i = (*&)j;
    i = *&j;
    i = *&*&j;
    //ilegal
    //q = *p;
    i = (*p)++ + *q;

    printf("%x \n%x \n%d \n%d \n%d \n",q = &j,p = &*&i,i = *&j, i = *&*&j,i = (*p)++ + *q);

    return 0;
}
