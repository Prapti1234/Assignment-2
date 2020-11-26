#include <stdio.h>

int main()
{
    int i, n, s=0;

    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for(i=1; i<=n; i+=2)
    {
        s += i;
    }

    printf("Sum of odd numbers = %d", s);

    return 0;
}