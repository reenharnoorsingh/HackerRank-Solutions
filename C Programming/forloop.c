#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *rep[] = {"0", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
        else
        {
            printf("%s\n", rep[i]);
        }
    }

    return 0;
}
