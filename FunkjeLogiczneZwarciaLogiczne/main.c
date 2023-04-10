/*
Funkcje logiczne
Zwarcia logiczne
Miesznie AND i OR oraz ich powielania w jako jedna funkcja
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a,b,c;

    setlocale(LC_ALL,"");

    a = b = c = 0;

    printf("Alternatywa: %d\t", (++a)||(++b)||(++c));
    printf("Argumenty: %d %d %d\n", a, b, c);

    a = b = c = 1;

    printf("Koniunkcja: %d\t", (--a)&&(--b)&&(--c));
    printf("Argumenty: %d %d %d\n", a, b, c);

    return 0;

}
