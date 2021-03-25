#include <stdio.h>
#include <stdlib.h>

int suma(const int *a, const int *b)
{
    return *a + *b;
}

int main()
{
    const int a,b;
    printf("%Podaj dwie liczby calkowite: \n");
    scanf("%d %d",&a,&b);
    printf("SUMA: %d",suma(&a,&b));
    return 0;
}
