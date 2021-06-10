#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m = 0;

    printf("Wpisz n oraz m:\n");

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        printf("%d", n);
        n += n;
        printf("\n");
    }

    return 0;
}
