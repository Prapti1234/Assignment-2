#include<stdio.h>
 
void main() 
{
   int i = 0;
   char c;
 
   for (i = 0; i < 256; i++) 
   {
      printf("%c ", c);
      c = c + 1;
   }
}