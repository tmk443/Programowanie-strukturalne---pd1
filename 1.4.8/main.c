#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;

    printf("Wpisz n:\n");
    scanf("%d", &n);

    unsigned int a = 0;
    unsigned int b = 1;
    unsigned int temp = 0;

    if (n == 0)
    {
        temp = a;
    }

    if (n == 1)
    {
        temp = b;
    }

    for (int i = 1; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%d", temp);

    return 0;
}
