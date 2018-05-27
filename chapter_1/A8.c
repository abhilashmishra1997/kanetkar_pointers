#include<stdio.h>
int main()
{
int i=10,j=20,diff;
diff=&j-&i;

printf("\nAddress of i= %u address of j=%u",&i,&j);
printf("\n Differences between addresses of i and j is %d",diff);
//printf("\n Differences between addresses of i and k is %d",&k-&i);

}

/*
Output:

Address of i= 3448344108 address of j=3448344112
 Differences between addresses of i and j is 1


*/
