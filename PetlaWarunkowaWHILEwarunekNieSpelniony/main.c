/*
P�tla warunkowa
while

Przyk�ad dzia�ania p�tli na instukcji prostej, gdy warunek nie jest spe�niony
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 3;

    setlocale(LC_ALL,"");

    printf("START\n");
    while(--a > 3) printf("%d\n", a); //P�tla nie spe�niona, --a przyjmuje warto�� 2, co jest fa�szem w formule
    printf("STOP\n");

    return 0;

}
