#include <stdio.h>
#include <math.h>

int main()
{
    float d, r, P;

    scanf("%f", &d);
    r = d / 2;
    P = 2 * M_PI * r;

    printf("%.2f", P);

    return 0;
}
