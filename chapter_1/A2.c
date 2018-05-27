#include<stdio.h>

int main()
{
char c, *cc;
int i;
long l;
float f;

c='Z';
i=15;
l=77777;
f=3.14;


cc=&c;
printf("\nc=%c cc=%u", *cc,cc);


cc=&i;
printf("\ni=%d cc=%u", *cc,cc);



cc=&l;
printf("\nc=%ld cc=%u", *cc,cc);


cc=&f;
printf("\nc=%f cc=%u", *cc,cc);


}

//Output:
//c=Z cc=2514775087
//i=15 cc=2514775088
//c=4294967249 cc=2514775096
//c=0.000000 cc=4294967235
