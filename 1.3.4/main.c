#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y = 0;

    scanf("%d %d", &x, &y);

    if (abs(x) >= abs(y)) printf("%d", x);
    else printf("%d", y);

    return 0;
}
