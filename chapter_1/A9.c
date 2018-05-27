#include<stdio.h>
int main()
{
int *i,*j;
j=i*2;
printf("\nj=%u",j);
}

/*
Output:
invalid operands to binary * (have ‘int *’ and ‘int’)
 j=i*2;
    ^

*/
