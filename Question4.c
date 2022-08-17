#include<stdio.h>
main()
{
    int a,r=0;
    printf("enter the value to be reversed : ");
    scanf("%d",&a);
    while(a!=0)
    {
    r=(r*10)+(a%10);
    a/=10;
    }
    printf("reversed value : %d : ",r);
}
