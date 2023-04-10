/*
Operacje na tekstach
Teksty
Funkcja STRRCHR - dzia�a podobnie do STRCHR, r�nica polega na tym, ze zmak jest wyszukiwany od ko�ca �a�cucha
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
