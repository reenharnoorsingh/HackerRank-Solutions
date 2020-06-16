#include <stdio.h>
int main()
{
    int a[3];
    int b[3];

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    scanf("%d %d &d", &b[0], &b[1], &b[2]);

    int ascore = 0;
    int bscore = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            ascore++;
        if (b[i] > a[i])
            bscore++;
    }
    printf("%d %d", ascore, bscore);
    return 0;
}