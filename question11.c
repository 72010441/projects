#include<stdio.h>
int main()
{
int num;
printf("enter the number ");
scanf("%d",&num);

(num%19 == 0)?printf("number is special ") :printf("number is not special ");
return 0;
}
