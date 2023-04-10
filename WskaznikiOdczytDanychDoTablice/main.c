/*
Wskazniki
Odczyt danych do tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char nazwisko[25];
    char miasto[25];
    int wiek;
    float wzrost;

    setlocale(LC_ALL, "");

    printf("Zbieranie danych osobowych\n"
           "==========================\n\n");

    printf("Nazwisko: ");
    scanf("%24s", nazwisko); //funkcja scanf oczekuje tylko adresu/wska�nika
    printf("Miasto: ");
    scanf("%24s", miasto); //tablice odczytujemy bez &, poniewa� nazwa tablicy sama w sobie jest wskza�nikiem jej pierwszego elementu
    printf("Wiek: ");
    scanf("%d", &wiek);
    printf("Wzrost [m]: ");
    scanf("%f", &wzrost);

    printf("\n\nMasz na nazwisko %s,\n"
           "Twoje miasto to %s,\n"
           "wiek lat %d i wzrost %4.2f m.\n\n",
           nazwisko, miasto, wiek, wzrost);

    return 0;
}
