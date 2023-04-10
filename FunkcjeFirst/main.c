/*
Funkcje
Zapoznanie z u¿ywaniem funkcji w programamch
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Funkcja oblicza a do potêgi b
//-----------------------------

float potega(float a, int b){

    int j;
    float x = 1;

    for(j = 0; j < b; j++) x*=a;

    return x;
}

int main(){

    float p = -3.5;
    int i;

    setlocale(LC_ALL, "");

    for(i = 0; i <= 9; i++)
            printf("%4.1f^%d = %9.2f\n", p, i, potega(p,i));

    return 0;
}
