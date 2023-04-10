/*
Operacje na tekstach
Teksty
Funkcja STRNCMP - dzia³a identycznie jak STRCMP, z t¹ ró¿nic¹, ¿e porównanie dotyczy zadanej liczby zanków pocz¹tkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char s1[100], s2[100], c;

    setlocale(LC_ALL, "");

    printf("Wpisz dwa wyrazy:\n\n");
    scanf("%s %s", s1, s2);
    switch(strncmp(s1, s2, 3))
    {
        case -1: c = '<';
        break;
        case 0: c = '=';
        break;
        case 1: c = '>';
        break;
    }

    printf("\n\nWg trzech pierwszych znaków %s %c %s\n\n", s1, c, s2);

    return 0;
}
