/*
Wskaüniki
Operacje wybory nasepnego lub poprzedniego elemnetu tablicy przy uøyciu wskaünika
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 5; //liczba elementÛw w tablicy
    float t[] = {1.55, 3.99, 7.18, 0.56, -2.51};
    float *p; //wskaünik do danej typu float
    int i;

    setlocale(LC_ALL, "");

   // p = &t[0]; //p (wskaünik) wskazuje pierwszy element tablicy
    p = t; //jeúli t jest tablicπ, to t jest adresem pierwszego elementu, czyli jego wskaünikiem
    for(i = 1; i <= n; i++){ //ta pÍtla wykonuje siÍ n razy, w typ przypadku 5 razy
        printf("%6.2f", *p++); //Za kaøym razem wypisuje kolejnπ wartoúÊ z tablicy
    }
    printf("\n\n");
    --p; //W tym zabiegu p bÍdzie wskazywa≥o ostatni element tabicy, nastepuje dekrementacja p = 5
    for(i = 1; i <= n; i++){ // ta pÍtla wykonuje siÍ n razy, czyli piÍÊ
        printf("%6.2f", *p--); //wypisuje wartoúci elementÛw tablicy od koÒca
    }
    printf("\n\n");

    return 0;

}
