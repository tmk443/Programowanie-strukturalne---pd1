#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2, liczba3 = 0;

    scanf("%d %d %d", &liczba1, &liczba2, &liczba3);

    printf("%f", (liczba1+liczba2+liczba3)/3.0);

    return 0;
}
