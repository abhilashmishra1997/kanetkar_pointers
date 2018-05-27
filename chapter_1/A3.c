#include<stdio.h>
int main()
{
int c=10,d=20;

printf("\nWe are in main()...");
printf("\nAddress of c=%u Address of d=%u" , &c , &d);
printf("\nBefore swap(), c=%d d=%d",c,d);
swap(c,d);
printf("\nBack of main()....");
printf("\nAfter swap(),c=%d, d=%d", c,d);
}

int swap(int c,int d)
{

printf("\nWe are in swap()...");
printf("\nAddress of c=%u Address of d=%u" , &c , &d);
printf("\nBefore change(), c=%d d=%d",c,d);

change(c,d);
printf("\nBack of swap()....");
printf("\nAfter change(),c=%d, d=%d", c,d);

}

int change(int c,int d)
{
int t;
printf("\nWe are in change()...");
printf("\nAddress of c=%u Address of d=%u" , &c , &d);
printf("\nBefore interchanging, c=%d d=%d",c,d);

t=c;
c=d;
d=t;

printf("\nBack of main()....");
printf("\nAfter swap,c=%d, d=%d", c,d);

}





/*
Output:

We are in main()...
Address of c=1947623216 Address of d=1947623220
Before swap(), c=10 d=20
We are in swap()...
Address of c=1947623196 Address of d=1947623192
Before change(), c=10 d=20
We are in change()...
Address of c=1947623148 Address of d=1947623144
Before interchanging, c=10 d=20
Back of main()....
After swap,c=20, d=10
Back of swap()....
After change(),c=10, d=20
Back of main()....
After swap(),c=10, d=20
*/





