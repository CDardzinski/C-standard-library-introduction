/*
Funkcje znakowe
u¿ycie biblioteki ctype.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    char t[80], *p;
    int a, d, s, o;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz (do 79 znaków)\n\n");
    gets(t);
    a = d = s = o = 0; //zerujemy liczniki
    p = t;
    while(*p)
    {
        if(isalpha(*p)) a++;//litery
        if(isdigit(*p)) d++;//cyfry
        if(isspace(*p)) s++;//spacje
        if(ispunct(*p)) o++;//pozosta³e znaki
        p++;
    }
    printf("\n\nStatystyka:\n\n"
            "Litery: %2d\n"
            "Cyfry : %2d\n"
            "Spacje: %2d\n"
            "Inne  : %2d\n\n", a, d, s, o);

    return 0;
}
