#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int n, m = 0;

    printf("Wpisz n i m:\n");
    scanf("%d %d", &n, &m);

    if (n >= m)
    {
        printf("Nieprawidlowa liczba!");
        return -1;
    }

    unsigned int x = 1;

    for (int i = n; i <= m; i ++)
    {
        x *= i;
    }


    printf("%d", x);

    return 0;
}
