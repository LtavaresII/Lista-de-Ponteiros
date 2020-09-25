#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=3,j=5;
    int *p, *q;
    int a,b,c,d;
    p = &i;
    q = &j;

    a = p == &i;
    b = *p - *q;
    c = **&p;
    d = 3 - *p/(*q) + 7;
    printf("p == &i = %d \n", a);
    printf("*p - *q = %d \n", b);
    printf("**&p = %d \n", c);
    printf("3 - *p/(*q) + 7 = %d \n", d);
    return 0;
}
