#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;

    printf("Wpisz n:\n");
    scanf("%d", &n);

    unsigned int s = 1;

    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }


    printf("%d", s);

    return 0;
}
