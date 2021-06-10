#include <stdio.h>
#include <stdlib.h>

int funkcja(unsigned int n)
{
    int temp = 1;
    for (int i  = 0; i < n; i++)
    {
        temp*=2;
    }
    return temp;
}

int main()
{
    printf("%d", funkcja(3));
    return 0;
}
