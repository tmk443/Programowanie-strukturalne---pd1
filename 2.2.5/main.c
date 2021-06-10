#include <stdio.h>
#include <stdlib.h>

float funkcja(int n)
{
    if (n == 0) return 1;
    float temp = 1;
    int abs_n = abs(n);
    for(int i = 0; i < abs_n; i++)
    {
        temp*=2;
    }

    if (n > 0) return temp;
    else return 1/temp;
}

int main()
{
    printf("%f", funkcja(-3));
    return 0;
}
