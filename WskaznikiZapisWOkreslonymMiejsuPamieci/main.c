/*
Wska�niki
Zapis warto�ci w okre�lonym miejscu w pami�ci
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float *p; //wskaznik do zmiennej typu float
    float a,b;

    setlocale(LC_ALL, "");

    p = &a; //p wskzauje zmienn� a              //odwo�uje si� do zmiennej p
    *p = 1.55; //w a umieszczamy warto�� 1.55   // odwo�uje si� do obiektu wskzywanego przez p
    p = &b; //p wskzauje zmienn� b
    *p = 9.99; //w b umieszczamy 9.99

    printf("a = %4.2f b = %4.2f\n\n", a, b);

    return 0;
}
