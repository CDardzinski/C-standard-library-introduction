/*
Pêtla zagnie¿dona
Rysowanie X z kropkami w bardzo ciekawy sposób
To jest to co lubie
Przykład czwarty
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    int x = 16; //liczba znaków w wierszu
    int i; //licznik znaków w wierszu (kolumn)
    int j;  //licznik wierszy
    //int c = 1;
    //int d = 1;

    for(j = 1; j <= x; j++){
        for(i = 1; i <= x; i++){
            if((i == j) || (i == j + 1) ||
               (i == j + 2) || (i == j + 3) ||
               (i == j + 8) || (i == j + 9) ||
               (i == j + 10)|| (i == j + 11)||
               (i == j - 5) || (i == j - 6) ||
               (i == j - 7) || (i == j - 8) ||
               (i == j - 13)|| (i == j - 14)||
               (i == j - 15)
               )
       {
            printf("X");
            }
            else {
            printf(".");
            }
        }
        printf("\n");
    }
}
