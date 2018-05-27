#include<stdio.h>
int main()
{
int i=10;
printf("\nValue of i=%d address of i=%u",i , &i);
&i=7200;
printf("\nNew Value of i=%d New address of i=%u",i , &i);
}

/*
Output:
lvalue required as left operand of assignment
*/
