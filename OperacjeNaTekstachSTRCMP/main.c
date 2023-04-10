/*
Operacje na tekstach
Teksty
Funkcja STRCMP - porównuje ze sob¹ dwa ³añcuchy
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
    switch(strcmp(s1, s2))
    {
        case -1: c = '<';
        break;
        case 0: c = '=';
        break;
        case 1: c = '>';
        break;
    }

    printf("\n\n%s %c %s\n\n", s1, c, s2);

    return 0;
}
