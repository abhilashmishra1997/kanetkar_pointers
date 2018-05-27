#include<stdio.h>
int main()
{
char *c=4000;
int *i=4000;
long *l=4000;
float *f=4000;
double *d=4000;

printf("\nc=%u, c+1=%u",c,c+1);

printf("\ni=%u, i+1=%u",i,i+1);

printf("\nl=%u, l+1=%u",l,l+1);

printf("\nf=%u, f+1=%u",f,f+1);

printf("\nd=%u, d+1=%u",d,d+1);

}

/*
Output:

c=4000, c+1=4001
i=4000, i+1=4004
l=4000, l+1=4008
f=4000, f+1=4004
d=4000, d+1=4008
*/
