#include <stdio.h>
#include <stdlib.h>

typedef struct student{
char *imie;
char *nazwisko;
char *adres;
char *pesel;
char *kierunek;
char *nrLegitymacji;

} student;

void funkcja(student *wsk);

int main()
{
    printf("Hello world!\n");

    student a;
    funkcja(a);

    return 0;
}

void funkcja(student *wsk)
{
    char temp[0];
    scanf("%s", &temp);
    printf("%s", temp);
}
