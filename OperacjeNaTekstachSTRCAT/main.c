/*
Operacje na tekstach
Teksty
Funkcja STRCAT - do³acza do jednego ³añcucha tekstowego drugi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char t[100];

    setlocale(LC_ALL, "");

    strcpy(t, "Kajko i Kokosz");
    printf("%s\n", t);
    strcat(t, " to dwaj");
    printf("%s\n", t);
    strcat(t, " dobrzy");
    printf("%s\n", t);
    strcat(t, " przyjaciele.");
    printf("%s\n", t);

    return 0;
}
