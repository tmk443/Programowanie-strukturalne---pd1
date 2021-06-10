#include <stdio.h>
#include <stdlib.h>


int funkcja(unsigned int n, unsigned int m)
{
    if (m == 0) return 1;
    if (n == 0) return 0;

    float temp = 1;

    for (int i = 0; i < m; i++)
    {
        temp*=n;
    }

    return temp;
}

int main()
{
    int n, m = 0;

    printf("Podaj n i m:");
    scanf("%d %d", &n, &m);

    if (n == 0 && m == 0)
    {
        printf("Conajmniej jedna liczba musi byc rozna od zera!");
        return -1;
    }

    printf("%d", funkcja(n, m));
    return 0;
}
