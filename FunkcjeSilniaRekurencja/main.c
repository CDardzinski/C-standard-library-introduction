/*
Funkcje
Liczenie silni przy u¿yciu rekurencji
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned silnia(unsigned n){

    if(n) return n * silnia(n - 1);
    else return 1;
}

int main(){

    unsigned i;

    setlocale(LC_ALL, "");

    for(i = 0; i <= 13; i++)
        printf("%2u! = %10u\n", i ,silnia(i));

    return 0;
}
