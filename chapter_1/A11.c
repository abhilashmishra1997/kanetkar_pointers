#include<stdio.h>

float a=3.14;
float **z;
float **y;
float ***x;
float ****v;
float ****w;

float **fun1(float *);
float ****fun2(float ***);

int main()
{
z=fun1(&a);
printf("%u %f",z,**z);

}

float **fun1(float *z)
{
y=&z;
v=fun2(&y);
return (**v);
}

float ****fun2(float ***x)
{
w=&x;
return (w);
}

/*
Output:
651729128 3.140000
*/
