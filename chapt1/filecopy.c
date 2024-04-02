#include <stdio.h>
int main()
{
 int c;
 printf("I'm waiting for a character: ");
 c = getchar();
 printf(" waited for the '%c' character.\n",c);
 return(0);
}