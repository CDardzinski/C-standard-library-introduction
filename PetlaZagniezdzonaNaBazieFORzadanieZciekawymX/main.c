/*
P�tla zagnie�dona
Rysowanie X z kropkami w bardzo ciekawy spos�b
To jest to co lubie
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    int x = 15; //liczba znak�w w wierszu
    int i; //licznik znak�w w wierszu
    int j;  //licznik wierszy

    for(j = 1; j <= x; j++){
        for(i = 1; i <= x; i++)
            if( (j == 1) || (j == x) ||
                (i == 1) || (i == x) ||
                (i == j) || (j == (x+1) - i))  printf("X");
            else                               printf(".");
        printf("\n");
    }
}
