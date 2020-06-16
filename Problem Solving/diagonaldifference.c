#include <stdio.h>
#include <math.h>
int main()
{
    int arr[100][100];
    int n;
    int c = 0, d = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    for (int i = 0; i < n; i++)
        c = c + arr[i][i];
    for (int i = 0; i < n; i++)
        d = d + arr[i][n - 1 - i];
    sum = abs(c - d);
    printf("%d", sum);
    return 0;
}
