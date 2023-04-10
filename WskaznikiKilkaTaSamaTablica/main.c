/*
Wskazniki
Operacje na tablicy z u�yciem dw�ch wskaznikow
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){


    int t[] = {5, 8, 3, 2, 9, 7, 4, 6, 1, 73, 62, 21}; //jaka� tablica przyk�adowa
    int *p, *r, c, i;

    setlocale(LC_ALL, "");

    p = &t[2];
    r = &t[11];

    c = r - p; //r�nica kom�rek poim�dzy wskazanymi elementami tablicy

    printf("Pomi�dzy %d a %d jest %d komorek: \n\n", *p, *r, c-1);

    for(i = 1; i < c; i++) printf("%d ", p[i]);//p[] wskazuje miejsce elementu w tablicy od ktorego zaczyna si� p�tla for
    printf("\n\n");

    return 0;
}
