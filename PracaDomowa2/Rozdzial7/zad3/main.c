#include <stdio.h>
#include <stdlib.h>

int main(){

    int liczba, parzyste = 0, nieparzyste = 0, liczbaP = 0, liczbaNP = 0;
    while(scanf(" %d", &liczba) != 0){
        if(liczba == 0){
            break;
        }
        if(liczba % 2 == 0){
            parzyste += liczba;
            liczbaP++;
        }
        else{
            nieparzyste += liczba;
            liczbaNP++;
        }
    }
    float sredniaP = parzyste / liczbaP;
    float sredniaNP = nieparzyste / liczbaNP;
    printf("Parzyste: %d, srednia: %g\n", liczbaP, sredniaP);
    printf("Nieparzyste: %d, srednia: %g", liczbaNP, sredniaNP);
    return 0;
}
