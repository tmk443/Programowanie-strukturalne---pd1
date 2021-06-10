#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y = 0;

    scanf("%d %d", &x, &y);

    if (x > y) printf("%d", x);
    if (x < y) printf("%d", y);
    if (x == y) printf("%d", x);

    return 0;
}
