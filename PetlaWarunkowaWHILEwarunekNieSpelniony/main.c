/*
Pêtla warunkowa
while

Przyk³ad dzia³ania pêtli na instukcji prostej, gdy warunek nie jest spe³niony
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 3;

    setlocale(LC_ALL,"");

    printf("START\n");
    while(--a > 3) printf("%d\n", a); //Pêtla nie spe³niona, --a przyjmuje wartoœæ 2, co jest fa³szem w formule
    printf("STOP\n");

    return 0;

}
