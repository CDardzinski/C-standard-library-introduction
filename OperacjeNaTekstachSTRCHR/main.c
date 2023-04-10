/*
Operacje na tekstach
Teksty
Funkcja STRCHR - szuka w podanym �a�cuch pierwszego wys�tpienia okre�lonego znaku.
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
    for(p = t; (p = strchr(p, 'e')); p++) *p = 'E';
    printf("Po: %s\n", t);

    return 0;
}
