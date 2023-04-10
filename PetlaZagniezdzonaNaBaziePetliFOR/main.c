/*
Petle zagnie¿d¿one na bazie pêtli for
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int x = 15; //liczba znaków w wierszu
    int i; //licznik znaków w wierszu
    int j;//licznik wierszy

    setlocale(LC_ALL,"");

    for(j = 1; j <= x; j++){
/*
    for(i = 1; i <= x; i++)printf("X"); //ta pêtla wypisuje X 15 razy
    printf("\n"); //tu pêtla for wykonuje x obiegów
*/

    for(i = 1; i <= j; i++)printf("X"); //ta pêtla wypisuje X "j" razy
    printf("\n");
    }
    return 0;

}
