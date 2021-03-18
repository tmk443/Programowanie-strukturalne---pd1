#include <stdio.h>
#include <stdlib.h>

int funkcja(int n){
    if(n == 0)
    {
        return 1;
    }else
    {
        return 2 * funkcja(n - 1) + 5;
    }

}

int main(){
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Liczba musi byc wieksza od 0!\n");
        return -1;
    }
    printf("%d", funkcja(n));
    return 0;
}
