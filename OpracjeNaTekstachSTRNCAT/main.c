/*
Operacje na tekstach
Teksty
Funkcja STRNCAT - dzia�a podobnie jak STRCAT, ma dodatkowy parametr okre�laj�cy liczb� znak�w do do�aczenia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAXC 78

int main()
{

    char t[MAXC + 1];

    setlocale(LC_ALL, "");

    t[0] = 0; //pusty �a�cuch tekstowy
    while(strlen(t) < MAXC)
        printf("%s\n", strncat(t, "Ala ma rudego kocura gbura", MAXC - strlen(t)));

    return 0;
}
