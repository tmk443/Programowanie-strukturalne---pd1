#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float a,b,suma,roznica,iloczyn,iloraz;
    char znak;
    printf("Podaj pierwsza liczbe\n");
    scanf("%g",&a);

    printf("Podaj druga liczbe\n");
    scanf("%g",&b);

    printf("Podaj znak dzialania(+,-,*,/)\n");
    scanf("%s",&znak);
    switch(znak)
    {
    case'+':
        {
            suma=a+b;
            printf("Wynik dodawawania: %g", suma);
            break;
        }
    case '-':
        {
            roznica=a-b;
            printf("Wynik odejmowania: %g", roznica);
            break;
        }
    case '*':
        {
            iloczyn=a*b;
            printf("Wynik mnozenia: %g", iloczyn);
            break;
        }
    case '/':
        {
            iloraz=a/b;
            printf("Wynik dzielenia: %g", iloraz);
            break;
        }
    }
    return 0;
}
