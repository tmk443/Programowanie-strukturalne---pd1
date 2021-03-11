#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x0,x1,x2;
    printf("Podaj wspolczynnik a\n");
    scanf("%g",&a);

    printf("Podaj wspolczynnik b\n");
    scanf("%g",&b);

    printf("Podaj wspolczynnik c\n");
    scanf("%g",&c);

   if(a!=0)
   {
    delta = b*b-4*a*c;
    if(delta>0)
    {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("x1 = %g, x2 = %g",x1, x2);
    }
    else if(delta=0)
    {
        x0 = (-b/(2*a));
        printf("delta rowna 0, x0 = %g",x0);
    }
    else
    {
        printf("DELTA MNIEJSZA OD 0 - BRAK ROZWIAZAN");
        return 0;
    }
   }
    return 0;
}
