#include <stdio.h>
#include <stdlib.h>

int main(){

    char tab[26];
    int i = 0;
    char c = 'a';
    while(c <= 'z'){
        tab[i] = c;
        i++;
        c++;
    }
    for(int i = 0; i < 26; i++){
        printf("%c ", tab[i]);
    }
    return 0;
}
