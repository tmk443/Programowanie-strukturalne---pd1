#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;

    printf("Wpisz n: ");
    scanf("%d", &n);

    for (int a = 1; a < n; a++)
    {
        for (int b = 1; b < n; b++)
        {
            for (int c = 1; c <= n; c++)
            {
                if (a*a+b*b==c*c)
                {
                    printf("a=%d, b=%d, c=%d \n", a, b, c);
                }
            }
        }
    }




    return 0;
}
