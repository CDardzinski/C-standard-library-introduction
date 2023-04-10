/*
Operacje na tekstach
Teksty
Funkcja STRPBRK - zwraca adres pierwszego wystapienie w �a�cuchu s1 dowolnego znaku umieszczonego w �a�cuchu s2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char s[80], *p;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz tekstu (do 79 znak�w):\n\n");
    gets(s);
    p = s;
    while((p = strpbrk(p, "aeiou"))) *p++ -= 32;
    printf("%s\n\n", s);

    return 0;
}
