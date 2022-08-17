#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c== 'u' )
printf("Yes the entered character is vowel ");
else
printf("Entered character is consonant ");
return 0;
}
