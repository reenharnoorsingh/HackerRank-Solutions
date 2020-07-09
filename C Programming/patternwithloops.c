#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int len = n * 2 - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int min = i < j ? i : j;                     //minimum difference between vertical and horizontal sides
            min = min < len - i ? min : len - i - 1;     //minimum difference between vertical sides
            min = min < len - j - 1 ? min : len - j - 1; //minimum difference between horizontal sides
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}