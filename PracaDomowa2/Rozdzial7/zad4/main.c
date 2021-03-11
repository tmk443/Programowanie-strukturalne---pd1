#include <stdio.h>
#include <stdlib.h>

int main(){

    char znak;
    int zamiany = 0;
    while((znak = getchar()) != '#'){
        if(znak == '.'){
                znak = '!';
                zamiany++;
        }
        else if(znak == '!'){
            znak = '!!';
            zamiany++;
        }
        printf("%c",znak);
    }
    printf("Liczba zamian: %d\n", zamiany);
    return 0;
}
