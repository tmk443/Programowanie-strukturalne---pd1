#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m = 0;

    printf("Wpisz n oraz m:\n");

    scanf("%d %d", &n, &m);

    int it = n;

    while (it < m)
    {
        printf("%d", it);
        printf("\n");
        it += n;
    }

    return 0;
}
