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

int main()
{
    int n = 0;

    scanf("%d", &n);

    printf("%d", funkcja(n));
    return 0;
}
