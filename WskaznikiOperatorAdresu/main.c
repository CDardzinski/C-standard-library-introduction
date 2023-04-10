/*
WskaŸniki
Jak u¿ywaæ operatora adresu, czyli znaku &
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char a, b, c;
    int d, e, f;

    setlocale(LC_ALL,"");

    printf("Adres zmiennej a: %p\n", &a); //%p oznacza, ¿e skojarzony z nim parametr jest adresem, wskaŸnikiem
    printf("Adres zmiennej b: %p\n", &b); // WskaŸniki s¹ wyœwietlanie jako liczby szesnastkowe
    printf("Adres zmiennej c: %p\n", &c);   // Typ char zajmuje w pamiêci tylko jeden bajt
    printf("Adres zmiennej d: %p\n", &d);   // Zaœ int zajmuje cztery bajty
    printf("Adres zmiennej e: %p\n", &e);
    printf("Adres zmiennej f: %p\n", &f);

    return 0;

}
