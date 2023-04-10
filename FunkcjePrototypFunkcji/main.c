/*
Funkcje
Zaimplemetowanie prototypu funkcji
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prototyp funkcji
//----------------

float sum2(float, float);

int main(){

    float x =0.1;
    int i;

    setlocale(LC_ALL, "");

    for(i = 1; i <= 26; i++) x = sum2(x,x);

    return 0;
}

//Definicja funkcji, powi¹zana z prototypem
//-----------------------------------------

float sum2(float a, float b){

    float c = a + b;

    printf("%9.1f + %9.1f = %9.1f\n", a, b, c);

    return c;
}
