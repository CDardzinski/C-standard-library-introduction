/*
Wska�niki
Funkcja Gets do uzupe�niania tablic danymi o r�nym z�o�eniu, zawierajaca znaki przerwy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char nazwisko[50];
    char miasto[50];
    int wiek;
    float wzrost;

    setlocale(LC_ALL, "");

    printf("Zbieranie danych osobowych\n"
           "==========================\n\n");
    printf("Nazwisko: ");
    gets(nazwisko);
    printf("Miasto: ");
    gets(miasto);
    printf("Wiek: ");
    scanf("%d", &wiek);
    printf("Wzrost [m] :");
    scanf("%f", &wzrost);
    printf("\n\nMasz na nazwisko %s,\n"
           "Twoje miasto to %s\n"
           "wiek lat %d i wzrost %4.2f m.\n\n",
           nazwisko, miasto, wiek, wzrost);

    return 0;

}
