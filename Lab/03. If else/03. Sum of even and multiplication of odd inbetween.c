#include <stdio.h>

int main()
{
    int a, b, count, sum = 0, multiplication = 1;

    scanf("%d%d", &a, &b);

    for(count = a + 1; count < b; count++)
    {
        if(count % 2 == 0)
        {
            sum += count;
        }
        if(count % 2 != 0)
        {
            multiplication = multiplication * count;
        }
    }

    printf("%d\n", sum);
    printf("%d", multiplication);

    return 0;
}
