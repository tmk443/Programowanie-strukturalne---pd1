#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'F';
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", c);
            c--;
        }
        printf("\n");
        c = 'F';
    }
    return 0;
}
