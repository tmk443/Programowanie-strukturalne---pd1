#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, y1, y2, w1, w2 = 0;

    float W, Wx, Wy = 0;

    printf("Podaj dwa wspolczynniki pierwszego rownania oraz jego wyraz wolny: ");
    scanf("%f %f %f", &x1, &y1, &w1);


    printf("Podaj dwa wspolczynniki drugiego rownania oraz jego wyraz wolny: ");
    scanf("%f %f %f", &x2, &y2, &w2);

    W = x1*y2 - y1*x2;
    Wx = w1*y2 - y1*w2;
    Wy = x1*w2 - w1*x2;

    if (W != 0)
    {
        printf("x =");
        printf("%f", Wx/W);
        printf("\n");

        printf("y =");
        printf("%f", Wy/W);
        printf("\n");

    }
    else
    {
        if (Wx == 0 && Wy == 0)
        {
             printf("Uklad jest nieoznaczony (ma nieskonczona liczbe rozwiazan).");
        }
        else
        {
            printf("Uklad jest sprzeczny (nie ma rozwiazan).");
        }
    }

    return 0;
}
