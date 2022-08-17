#include<stdio.h>
main()
{
int a,b,r;
printf("Enter the value and the number of bits ");
scanf("%d%d",&a,&b);
r=1<<a&b;

(r == 0)? printf("14th bit is clear "): printf("14th bit is set ");
}
