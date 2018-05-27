#include<stdio.h>
int main()
{
int i=3;
float f=3.5, *prod;
float *multiply(int ,float);


prod=multiply(i,f);
printf("\nprod=%u value at address=%f",prod,*prod);
}

float * multiply(int ii,float ff)
{
	float product;
	product=ii*ff;
	printf("product=%f address of product=%u",product,&product);
	return (&product);
}

/*
Output:
Segmentation fault (core dumped)

*/
