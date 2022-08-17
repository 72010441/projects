#include<stdio.h>
int main()
{
int num;
printf("enter the number ");
scanf("%d",&num);

if(num%11 == 0)
printf("number is special ");
else
printf("number is not special ");
return 0;
}
