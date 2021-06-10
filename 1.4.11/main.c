#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, x, delta, x1, x2 = 0;

    printf("Wpisz a, b, c oraz d:\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("%f %f %f %f", a, b, c, d);

    a = fabs(a);
    c = c - d;
    delta = b*b - 4*a*c;


    if(delta == 0)
    {
        x = ceil((-b)/2*a);
    }
    else if(delta < 0)
    {
        x = 0;
    }
    else
    {
        x1 = (-b -sqrt(delta))/2*a;
        x2 = (-b +sqrt(delta))/2*a;

        float temp = 0;

        //zamiana - x1 ma byc mniejszym pierwiastkiem, a x2 wiekszym
        if (x1 > x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }


        if (x1 < 0 && x2 < 0) //oba ujemne
        {
            x = 0;
        }
        else if (x1 < 0 & x2 > 0) //jeden ujemny, drugi dodatni
        {
            x = ceil(x2);
            if (x2 == x) x += 1;
        }
        else if (x1 >= 0 && x2 >= 0) //oba dodatnie
        {
            x = ceil (x1);
            if (x1 == x) x += 1;
        }
    }


    printf("\n");
    printf("%f", x);
    printf("\n");
    printf("%f %f", x1, x2);
    printf("\n");
    printf("%f %f %f", delta, a, c);

    return 0;
}
