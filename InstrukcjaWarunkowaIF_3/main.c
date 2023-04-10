/*
Instrukcja warunkowa
pêtla IF
pêtla blokowa
Przyk³ad 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float a = 7.2; //tutaj wpisz wartoœci
    float b = 3.1;
    float x;

    setlocale (LC_ALL,"");

    printf("Przed: %6.2f %6.2f\n", a, b);

    if(a > b){
        x = a;
        a = b;
        b = x;  //Zmieniamy
    }
    printf("Po: %6.2f %6.2f\n", a, b);

    return 0;
}
