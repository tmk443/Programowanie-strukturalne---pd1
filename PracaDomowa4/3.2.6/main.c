#include <stdio.h>
#include <stdlib.h>

void zamiana(int n, int *w)
{
    *w = n;
}

int main()
{
    int a;
    int b = 0;
    printf("Podaj liczbe calkowita: ");
    scanf("%d",&a);
    printf("Wartosc zmiennej b przed zamiana: %d\n", b);
    zamiana(a,&b);
    printf("Wartosc zmiennej b po zamianie: %d\n", b);
    return 0;
}
