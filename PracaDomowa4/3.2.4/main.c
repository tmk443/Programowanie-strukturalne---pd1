#include <stdio.h>
#include <stdlib.h>

void zamien(int *a,int *b)
{
    if(*b>*a)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a,b;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d",&a,&b);
    printf("a = %d, b = %d \n",a,b);
    zamien(&a,&b);
    printf("a = %d, b = %d \n",a,b);
    return 0;
}
