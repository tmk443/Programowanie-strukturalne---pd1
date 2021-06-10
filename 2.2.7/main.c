#include <stdio.h>
#include <stdlib.h>

float funkcja(int n, int m)
{
    if (m == 0) return 1;
    if (n == 0) return 0;

    float temp = 1;

    int abs_m = abs(m);

    for (int i = 0; i < abs_m; i++)
    {
        temp*=n;
    }

    if (m > 0) return temp;
    else return 1/temp;
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

    printf("%f", funkcja(n, m));
    return 0;
}
