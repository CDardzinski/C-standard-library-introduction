/*
Wska�niki
Operacje wybory nasepnego lub poprzedniego elemnetu tablicy przy u�yciu wska�nika
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 5; //liczba element�w w tablicy
    float t[] = {1.55, 3.99, 7.18, 0.56, -2.51};
    float *p; //wska�nik do danej typu float
    int i;

    setlocale(LC_ALL, "");

   // p = &t[0]; //p (wska�nik) wskazuje pierwszy element tablicy
    p = t; //je�li t jest tablic�, to t jest adresem pierwszego elementu, czyli jego wska�nikiem
    for(i = 1; i <= n; i++){ //ta p�tla wykonuje si� n razy, w typ przypadku 5 razy
        printf("%6.2f", *p++); //Za ka�ym razem wypisuje kolejn� warto�� z tablicy
    }
    printf("\n\n");
    --p; //W tym zabiegu p b�dzie wskazywa�o ostatni element tabicy, nastepuje dekrementacja p = 5
    for(i = 1; i <= n; i++){ // ta p�tla wykonuje si� n razy, czyli pi��
        printf("%6.2f", *p--); //wypisuje warto�ci element�w tablicy od ko�ca
    }
    printf("\n\n");

    return 0;

}
