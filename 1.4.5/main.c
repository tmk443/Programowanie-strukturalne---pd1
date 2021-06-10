#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;

    printf("Wpisz n:\n");
    scanf("%d", &n);

    unsigned int x = 0;

    for (int i = 0; i < n; i++)
    {
        x += i*i;
    }


    printf("%d", x);

    return 0;
}
