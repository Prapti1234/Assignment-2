#include <stdio.h>
#include<math.h>
int main() 
{
    int n;
    int c = 0,f,l,t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while (n > 0) 
    {
        c++;
        n /= 10;     
    
    }
    f=t/pow(10,c-1);
    l=t%10;
    printf("First digit is: %d\n",f );
    printf("Last digit is: %d\n",l );
    return 0;
}