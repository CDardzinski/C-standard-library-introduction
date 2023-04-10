/*
Operacje na tekstach
Teksty
Funkcja STRNCPY dzia³a podobnie do funkcji STRCPY(string copy)
Kopiuje zadan¹ liczbê znaków do tablicy znakowej.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    /*
    char t[6];

    setlocale(LC_ALL, "");

    strncpy(t, "Abracadabra", 6);
    printf("%s\n", t);
*/

    char t[7];

    setlocale(LC_ALL, "");

    strncpy(t, "Abracadabra", 6);
    t[6] = 0; //Znak NULL na koniec
    printf("%s\n", t);

    return 0;
}
