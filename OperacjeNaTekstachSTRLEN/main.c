/*
Operacje na tekstach
Teksty
Funkcja STRLEN - zwraca liczbe znak�w, kt�re zawiera podany �a�cuch
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char t[20];

    setlocale(LC_ALL, "");

    strcpy(t, "Kajko i Kokosz");
    printf("Tekst >%s< ma znak�w %d\n", t, strlen(t));

    return 0;
}
