/*
Operacje na tekstach
Teksty
Funkcja STRCPY (string copy)
Kopiuje ³acnuch znaków do tablicy znakowej.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char t[12];

    setlocale(LC_ALL, "");

    strcpy(t, "Abracadabra");
    printf("%s\n", t);

    return 0;
}
