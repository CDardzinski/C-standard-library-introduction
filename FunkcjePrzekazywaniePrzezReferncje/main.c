/*
Funkcje
Przekazywanie przez referncje
Oblicznie obwodu i pola tr�jk�ta
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Funkcja odczytuje wsp�rz�dne punktu
//------------------------------------

void r(char p, float *x, float *y){

    printf("Punkt %c: \n", p);
    printf("x = ");
    scanf("%f", x);
    printf("y = ");
    scanf("%f", y);
    printf("\n");
}

//Funkcja obliczniana d�ugo�ci boku
//---------------------------------

float l(float x1, float y1, float x2, float y2){

    float x = x2 - x1;
    float y = y2 - y1;

    return sqrt(x * x + y * y);
}

int main(){

    float xa, ya, xb, yb, xc, yc, a, b, c, p, o, s;

    setlocale(LC_ALL, "");

    printf("Obiczanie obwodu i pola tr�jk�ta\n"
           "--------------------------------\n\n");

    r('A', &xa, &ya); //czytamy wsp�rzedne punktu A
    r('B', &xb, &yb); //czytamy wsp�rzedne punktu B
    r('C', &xc, &yc); //czytamy wsp�rz�dne punktu C
    a = l(xa, ya, xb, yb); //d�ugo�� boku a
    b = l(xb, yb, xc, yc); //d�ugo�� boku b
    c = l(xc, yc, xa, ya); //d�ugo�� boku c

    o = a + b + c; //obw�d

    p = o / 2; //po�owa obwodu potrzebna we wzorze Herona

    s = sqrt(p * (p - a) * (p - b) * (p - c)); //pole

    printf("Obw�d = %9.3f\n"
           "Pole = %9.3f\n\n", o, s);

    return 0;
}
