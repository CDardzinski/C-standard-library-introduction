/*
Funkcje znakowe
nastêpne makra
u¿ycie biblioteki ctype.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    char t[80], *p;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz (do 79 znaków)\n\n");
    gets(t);
    for(p = t; *p; p++)
    {
        *p = toupper(*p);
        printf("%s\n\n", t);
    }
    return 0;
}
