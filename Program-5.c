#include <stdio.h>
int main() {
    int n;
    int c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
    {
        c++;
        n /= 10;     
    
    }

    printf("Number of digits: %d", c);
}