#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    float sqrt = n;
    float temp = 0;

    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = (n / temp + temp) / 2;
    }
    return (int)sqrt;
}



int suma (unsigned int n)
{
    int suma = 0;
    for (int i = 0; i <= n; i++)
    {
        suma += funkcja(i);
    }
    return suma;
}

int main()
{
    unsigned int n = 0;

    scanf("%d", &n);

    printf("%d", suma(n));
    return 0;
}
