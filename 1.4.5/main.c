#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,wynik = 0;
    printf("Podaj liczbe calkowita, nieujemna: ");
    scanf("%d",&a);

    for(int i=0;i<=a;i++)
    {
        int potega = pow(i,2);
        wynik += potega;
    }
    printf("%d",wynik);
    return 0;
}
