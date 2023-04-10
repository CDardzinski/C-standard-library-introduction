/*
Struktury
Unie

Definiowanie:
union nazwa_typu_unii
    {
        typ pole_1;
        typ pole_2;
        ...
        typ pole_n;
    };

Definicja zmiennych:
union nazwa_typu_unii zmienna;

Zmienne definoiwane bez nazwania unii:
union
    {
        typ pole_1;
        typ pole_2;
        ...
        typ_pole_3
    } zmienna;

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct
    {
        char a;
        int b;
        float c;
    }s;

    union
    {
        char a;
        int b;
        float c;
    }u;

    setlocale(LC_ALL, "");

    printf("Rozmiar struktury:\t %2d B\n"
           "Rozmiar unii:\t\t %2d B\n",
           sizeof(s), sizeof(u));

    return 0;
}
