#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;

    printf("Wpisz n (n > 2):\n");
    scanf("%d", &n);

    if (n <= 2)
    {
        printf("Nieprawidlowa liczba!");
        return -1;
    }

    unsigned int x = 2;

    for (int i = 4; i <= n; i = i + 2)
    {
        x *= i;
    }


    printf("%d", x);



    return 0;
}
