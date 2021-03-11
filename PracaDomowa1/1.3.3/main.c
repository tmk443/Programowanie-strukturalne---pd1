#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;

    printf("Podaj pierwsza dowolna liczbe calkowita\n");
    scanf("%d",&a);
    printf("Podaj druga dowolna liczbe calkowita\n");
    scanf("%d",&b);
    printf("Podaj trzecia dowolna liczbe calkowita\n");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("Najwieksza liczba to %d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("Najwieksza liczba to: %d\n",b);
    }
     else if(c>a && c>b)
    {
        printf("Najwieksza liczba to: %d\n",c);
    }
    else if(a=b=c)
    {
        printf("Liczby sa rowne: %d\n",a);
    }



    return 0;
}
