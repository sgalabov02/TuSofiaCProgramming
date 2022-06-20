#include <stdio.h>

int main()
{
    int a, b, count, sum = 0;

    scanf("%d%d", &a, &b);

    for(count = a + 1; count < b; count++)
    {
        printf("%d\n", count);
        sum = sum + count;
    }

    printf("%d", sum);

    return 0;
}
