#include <stdio.h>
#include <stdlib.h>

int main(){

    int liczba, parzyste = 0, nieparzyste = 0, liczbaP = 0, liczbaNP = 0;
    while(free){
        scanf("%d", &liczba);
    if(liczba == 0) break;
        switch (liczba){
            case 1:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 2:
                parzyste += liczba;
                liczbaP++;
                break;
            case 3:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 4:
                parzyste += liczba;
                liczbaP++;
                break;
            case 5:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 6:
                parzyste += liczba;
                liczbaP++;
                break;
            case 7:
                nieparzyste += liczba;
                liczbaNP++;
                break;
            case 8:
                parzyste += liczba;
                liczbaP++;
                break;

            case 9:
                nieparzyste += liczba;
                liczbaNP++;
                break;
        }
    }
    float sredniaP = parzyste / liczbaP;
    float sredniaNP = nieparzyste / liczbaNP;
    printf("Parzyste: %d, srednia: %g\n", liczbaP, sredniaP);
    printf("Nieparzyste: %d, srednia: %g", liczbaNP, sredniaNP);
    return 0;
}
