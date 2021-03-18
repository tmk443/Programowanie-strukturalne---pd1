#include <stdio.h>
#include <stdlib.h>

int min(x,y)
{
    if (x<y)
    {
        return x;
    }else if (x>y)
    {
        return y;
    }else
    {
        printf("Liczby sa rowne");
        return 0;
    }
}


int main()
{
    int x,y;
    printf("Podaj dwie liczby: \n");
    scanf("%d %d", &x, &y);
    printf("%d",min(x,y));

    return 0;
}
