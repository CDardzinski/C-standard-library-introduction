/*
Kolejnoœæ dzia³añ
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    //printf("Wynik: %d\n\n", 7+5*2-6/3); //przyk³ad 1

    printf("Wynik: %d\n\n", 3+(2+4)*(7-1)/3-11); //Przyk³ad 2

    return 0;
}
