/*
Bity
Sta³e ³añcuchowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char *a  = "Aleksander IX"; //wskaŸnik
    char b[] = "Jan Kowalski"; //tablica znkowa

    setlocale(LC_ALL, "");

    printf("Tekst nr 1: %s\n"
           "Tekst nr 2: %s\n", a, b);

    return 0;
}
