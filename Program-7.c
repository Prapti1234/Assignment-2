#include <stdio.h>
#include <math.h>
 
int main() 
{
 
    int n, l, f, t, swap, c = -1;
    printf("Enter any number: ");
    scanf("%d", &n);
    t = n;
    l = t % 10;
    while(t>0)
    {
        t/= 10;
        c++;
    }
    f = n/pow(10,c);
    swap = (l * pow(10, c) + f) + (n - (f * pow(10, c) + l));
    printf("First Digit: %d\n", f);
    printf("Last Digit: %d\n", l);
    printf("%d is swapped to %d\n", n, swap);
    return 0;
}
