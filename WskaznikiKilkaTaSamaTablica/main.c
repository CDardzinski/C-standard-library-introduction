/*
Wskazniki
Operacje na tablicy z u¿yciem dwóch wskaznikow
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){


    int t[] = {5, 8, 3, 2, 9, 7, 4, 6, 1, 73, 62, 21}; //jakaœ tablica przyk³adowa
    int *p, *r, c, i;

    setlocale(LC_ALL, "");

    p = &t[2];
    r = &t[11];

    c = r - p; //ró¿nica komórek poimêdzy wskazanymi elementami tablicy

    printf("Pomiêdzy %d a %d jest %d komorek: \n\n", *p, *r, c-1);

    for(i = 1; i < c; i++) printf("%d ", p[i]);//p[] wskazuje miejsce elementu w tablicy od ktorego zaczyna siê pêtla for
    printf("\n\n");

    return 0;
}
