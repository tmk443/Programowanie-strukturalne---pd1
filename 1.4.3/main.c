#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m, k = 0;

    printf("Wpisz n, m oraz k:\n");

    scanf("%d %d %d", &n, &m, &k);

    for (int i = n; i < k; i += n)
    {
        if (i > m)
        {
            printf("%d", i);
            printf("\n");
        }
    }


    return 0;
}
