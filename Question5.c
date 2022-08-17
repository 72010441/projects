#include<stdio.h>
int main()
{
int a=1,b=2,c=3,d=5,e=4,f=6,g=7,h=8,i=9,t=0;
printf("Before %d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i);
t=d;
d=e;
e=t;
printf("\nAfter %d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i);
return 0;
}

