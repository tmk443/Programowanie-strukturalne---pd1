#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z = 0;

    scanf("%d %d %d", &x, &y, &z);

    if (x >= z && x >= y) printf("%d", x);
    else if (z >= x && z >= y) printf("%d", z);
    else if (y >= z && y >= x) printf("%d", y);

    return 0;
}
