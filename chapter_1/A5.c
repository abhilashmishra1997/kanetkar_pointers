#include<stdio.h>
int main()
{
int a=5,*aa;

aa=&a;

a=power(&aa);
printf("\na=%d aa=%u",a,aa);

}

int power(int **ptr)
{
	int b;
	b=**ptr***ptr;
	return b;
}

/*
Output:
a=25 aa=235822204
*/
