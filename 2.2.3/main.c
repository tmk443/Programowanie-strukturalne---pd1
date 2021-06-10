#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int najwiekszyDzielnik (unsigned int liczba)
{
    for (int i = liczba/2; i > 0; i--)
    {
        if (liczba % i == 0) return i;
    }
}

int main()
{
    unsigned int n = 0;

    scanf("%d", &n);
    if (n <= 2)
    {
        printf("Podana liczba jest nieprawidlowa! (n > 2)");
        return -1;
    }

    printf("%d", najwiekszyDzielnik(n));

    return 0;
}
