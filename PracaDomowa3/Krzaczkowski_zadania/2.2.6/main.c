#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potegowanie(n,m)
{
    if(n == 0 && m == 0)
    {
        printf("Przynajmniej jedna liczba musi byc rozna od 0! \n");
        return 0;
    }else if(n<0 || m<0)
    {
        printf("Liczby nie moga byc ujemne!\n");
        return 0;
    }else
    {
       return pow(n,m);
    }
}

int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite nieujemne, pierwsza liczba bedzie podstawa a druga wykladnikiem\n");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",potegowanie(n,m));

    return 0;
}
