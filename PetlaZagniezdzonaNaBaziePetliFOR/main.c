/*
Petle zagnie�d�one na bazie p�tli for
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int x = 15; //liczba znak�w w wierszu
    int i; //licznik znak�w w wierszu
    int j;//licznik wierszy

    setlocale(LC_ALL,"");

    for(j = 1; j <= x; j++){
/*
    for(i = 1; i <= x; i++)printf("X"); //ta p�tla wypisuje X 15 razy
    printf("\n"); //tu p�tla for wykonuje x obieg�w
*/

    for(i = 1; i <= j; i++)printf("X"); //ta p�tla wypisuje X "j" razy
    printf("\n");
    }
    return 0;

}
