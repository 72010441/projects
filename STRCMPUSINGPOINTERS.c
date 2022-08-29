        //Program to compare two strings using pointers

#include<stdio.h>
main()
{
    char s1[]="abc";
    char s2[]="pqr";
    char *p1,*p2;
    p1=&s1;
    p2=&s2;
    int y=strcmp(p1,p2);
    (y==0)? printf(" equal "): printf("not equal ");

}
