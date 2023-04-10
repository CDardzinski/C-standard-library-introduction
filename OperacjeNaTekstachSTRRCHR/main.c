/*
Operacje na tekstach
Teksty
Funkcja STRRCHR - dzia³a podobnie do STRCHR, ró¿nica polega na tym, ze zmak jest wyszukiwany od koñca ³añcucha
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char t[] = "Dzisiaj misiaczek wypije kubeczek pysznego miodku.";
    char *p;

    setlocale(LC_ALL, "");

    printf("Przed: %s\n", t);
    if((p = strrchr(t, ' ')));
    while(*++p) if(*p >= 'a' && *p <= 'z') *p -=32;
    printf("Po: %s\n", t);

    return 0;
}
