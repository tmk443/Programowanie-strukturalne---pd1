#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int i)
{
    return pow(2,i);
}
int main()
{
    int n;
    printf("Podaj liczbe calkowita \n");
    scanf("%d", &n);
    printf("2 do potegi %d wynosi %d",n,potega(n));
    return 0;
}
