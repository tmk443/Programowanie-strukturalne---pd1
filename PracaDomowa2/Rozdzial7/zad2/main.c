#include <stdio.h>
#include <stdlib.h>

int main(){
    char znak;
    char ctab[400];
    int i = 0;
    while((znak = getchar()) != '#'){
        if(znak == '\n') {ctab[i] = '\\n';}
        else {ctab[i] = znak;}

        i++;
    }
    for(int x = 1; x <= i; x++){
        printf("'%c'-%d, ", ctab[x - 1], (int)ctab[x - 1]);
        if(x % 8 == 0) printf("\n");
    }
    return 0;
}
