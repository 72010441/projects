#include<stdio.h>
int main()

{

 printf(" 00 AND %d",0&0);
 printf("\n 01 AND  %d",0&1);
 printf("\n 10 AND  %d",1&0);
 printf("\n 11 AND  %d",1&1);

 printf("\n\n 00 OR %d",0|0);
 printf("\n 01 OR %d",0|1);
 printf("\n 10 OR %d",1|0);
 printf("\n 11 OR %d",1|1);

 printf("\n\n 0 NOT %d",!1);
 printf("\n 1 NOT %d",!0);

 return 0;
}
