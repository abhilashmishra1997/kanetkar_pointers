#include<stdio.h>
int main()
{
int c=10,d=20;
printf("\nBefore swap, c=%d d=%d",c,d);
swap(&c,&d);
printf("\nAfter swap, c=%d d=%d",c,d);
}


int swap(int *cc,int *dd)
{
exchange(&cc,dd);
}
int exchange(int **cc,int *dd)
{
int t;
t=**cc;
**cc=*dd;
*dd=t;
}

/*
Output:
Before swap, c=10 d=20
After swap, c=20 d=10
*/
