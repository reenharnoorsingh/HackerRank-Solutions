#include <stdio.h>

int findsum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int a = n % 10; // remainder
        sum = sum + a;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", findsum(n));
    return 0;
}