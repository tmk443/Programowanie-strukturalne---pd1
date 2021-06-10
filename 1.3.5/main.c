#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor = 0;

    printf("Chce podac:\n");
    printf("1. wysokosc i podstawe\n");
    printf("2. trzy boki\n");
    printf("Wybierz wpisujac cyfre: ");
    scanf("%d", &wybor);

    if(wybor != 1 && wybor != 2)
    {
        printf("Zla liczba!");
        return 0;
    }

    if (wybor == 1)
    {
        int h, a = 0;

        printf("Podaj wysokosc i dlugosc podstawy:");
        scanf("%d %d", &h, &a);

        printf("Wynik:");
        printf("%d", h*a/2);

    }

    if (wybor == 2)
    {
        float a, b, c, p = 0;

        printf("Podaj trzy dlugosci bokow:");
        scanf("%f %f %f", &a, &b, &c);

        p = (a + b + c)/2;

        printf("Wynik:");
        printf( "%f", sqrt( p*(p-a)*(p-b)*(p-c) ) );

    }

    return 0;
}
