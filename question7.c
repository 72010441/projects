#include<stdio.h>
int main()
{
float p1, p2, p3;
printf("enter the weights of three people ");
scanf("%f%f%f",&p1,&p2,&p3);

if (p1>p2 && p1>p3)
printf("person 1 is heaviest ");
else if(p2>p1 && p2>p3)
printf("person 2 is heaviest");
else
printf("person 3 is heaviest ");
return 0;


}
