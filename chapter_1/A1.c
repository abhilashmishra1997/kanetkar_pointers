#include<stdio.h>
int main()
{
int a, *b, **c, ***d, ****e;
a=10;
b=&a;
c=&b;
d=&c;
e=&d;
printf("\na= %d b=%d c=%d d=%d e=%d",a,b,c,d,e);
printf("\n%d %d %d",a, a+*b, **c+***d+ ****e); 
}

//a= 10 b=1607936004 c=1607936008 d=1607936016 e=1607936024
//10 20 30
