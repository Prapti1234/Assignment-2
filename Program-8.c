#include <stdio.h>
int main()
{
    int num, n;
    int i, l;
    int f[10];

    printf("Enter any number: ");
    scanf("%d", &num);

    for(i=0; i<10; i++)
    {
        f[i] = 0;
    }

    n = num; 

    while(n != 0)
    {
        l = n % 10;
        n /= 10;
        f[l]++;
    }
    printf("Frequency of each digit in %d is: \n", num);
    for(i=0; i<10; i++)
    {
       printf("Frequency of %d = %d\n", i, f[i]);
    }

    return 0;
}
