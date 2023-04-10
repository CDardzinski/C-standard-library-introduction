/*
Funkcje
U¿ycie zmiennych globalnych w funkcjach wewn¹trz programu
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Zmienne globalne
//----------------

float a, b, c;
char d;

//Funkcja wyœwietla wyniki obliczeñ
//---------------------------------

void p(){

    printf("\n%9.3f %c %9.2f = %9.3f\n", a, d, b, c);
}

int main(){

    setlocale(LC_ALL, "");

    printf("Liczba nr 1 = ");
    scanf("%f", &a);

    printf("Liczba nr 2 = ");
    scanf("%f", &b);

    d = '+'; //tak siê zapisuje symbol ACSII w zmiennej
    c = a + b;
    p();

    d = '-';
    c = a - b;
    p();

    d = 'x';
    c = a * b;
    p();

    d = ':';
    c = a / b;
    p();

    return 0;
}
