/*
Funkcje
Przekazywanie przez referncje
Oblicznie obwodu i pola trójk¹ta
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Funkcja odczytuje wspó³rzêdne punktu
//------------------------------------

void r(char p, float *x, float *y){

    printf("Punkt %c: \n", p);
    printf("x = ");
    scanf("%f", x);
    printf("y = ");
    scanf("%f", y);
    printf("\n");
}

//Funkcja obliczniana d³ugoœci boku
//---------------------------------

float l(float x1, float y1, float x2, float y2){

    float x = x2 - x1;
    float y = y2 - y1;

    return sqrt(x * x + y * y);
}

int main(){

    float xa, ya, xb, yb, xc, yc, a, b, c, p, o, s;

    setlocale(LC_ALL, "");

    printf("Obiczanie obwodu i pola trójk¹ta\n"
           "--------------------------------\n\n");

    r('A', &xa, &ya); //czytamy wspó³rzedne punktu A
    r('B', &xb, &yb); //czytamy wspó³rzedne punktu B
    r('C', &xc, &yc); //czytamy wspó³rzêdne punktu C
    a = l(xa, ya, xb, yb); //d³ugoœæ boku a
    b = l(xb, yb, xc, yc); //d³ugoœæ boku b
    c = l(xc, yc, xa, ya); //d³ugoœæ boku c

    o = a + b + c; //obwód

    p = o / 2; //po³owa obwodu potrzebna we wzorze Herona

    s = sqrt(p * (p - a) * (p - b) * (p - c)); //pole

    printf("Obwód = %9.3f\n"
           "Pole = %9.3f\n\n", o, s);

    return 0;
}
