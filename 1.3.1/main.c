#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        n *= -1;
    }

    printf("%d", n);
    return 0;
}
