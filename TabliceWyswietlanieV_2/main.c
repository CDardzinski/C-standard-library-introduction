/*
Tablice
Wyœwietlanie V_2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char t[] = "Jasiek";

    setlocale(LC_ALL, "");

    printf("Tablica t zawiera tekst [%s]\n", t); //%s oznacza ci¹g znków tak zwany string

    return 0;
}
