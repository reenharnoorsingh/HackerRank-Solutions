#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2;
    float f1,f2;
    scanf("%d %d", &a1,&a2);
    scanf("%f %f",&f1,&f2);
    printf("%d %d\n", a1+a2, a1-a2);
    printf("%.1f %.1f", f1+f2, f1-f2);
}