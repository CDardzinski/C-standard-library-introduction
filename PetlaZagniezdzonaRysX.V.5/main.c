/*
Pêtla zagnie¿dona
Rysowanie X z kropkami w bardzo ciekawy sposób
To jest to co lubie
Przykład piąty
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    int x = 16; //liczba znaków w wierszu
    int i; //licznik znaków w wierszu (kolumn)
    int j;  //licznik wierszy

    for(j = 1; j <= x; j++){
        for(i = 1; i <= x; i++){
            if((j == 1) || (j == x) ||

               (i == 1) || (i == x) ||

               ((j == 3) && (i == 3))||
               ((j == 3) && (i == 4))||
               ((j == 3) && (i == 5))||
               ((j == 3) && (i == 6))||
               ((j == 3) && (i == 7))||
               ((j == 3) && (i == 8))||
               ((j == 3) && (i == 9))||
               ((j == 3) && (i == 10))||
               ((j == 3) && (i == 11))||
               ((j == 3) && (i == 12))||
               ((j == 3) && (i == 13))||
               ((j == 3) && (i == 14))||

               ((j == 4) && (i == 3))||
               ((j == 4) && (i == 14))||

               ((j == 5) && (i == 3))||
               ((j == 5) && (i == 14))||

               ((j == 5) && (i == 5))||
               ((j == 5) && (i == 6))||
               ((j == 5) && (i == 7))||
               ((j == 5) && (i == 8))||
               ((j == 5) && (i == 9))||
               ((j == 5) && (i == 10))||
               ((j == 5) && (i == 11))||
               ((j == 5) && (i == 12))||

               ((j == 6) && (i == 3))||
               ((j == 6) && (i == 14))||

               ((j == 6) && (i == 5))||
               ((j == 6) && (i == 12))||

               ((j == 7) && (i == 3))||
               ((j == 7) && (i == 14))||

               ((j == 7) && (i == 5))||
               ((j == 7) && (i == 12))||

               ((j == 7) && (i == 7))||
               ((j == 7) && (i == 8))||
               ((j == 7) && (i == 9))||
               ((j == 7) && (i == 10))||

               ((j == 8) && (i == 3))||
               ((j == 8) && (i == 14))||

               ((j == 8) && (i == 5))||
               ((j == 8) && (i == 12))||

               ((j == 8) && (i == 7))||
               ((j == 8) && (i == 10))||

               ((j == 9) && (i == 7))||
               ((j == 9) && (i == 10))||

               ((j == 9) && (i == 5))||
               ((j == 9) && (i == 12))||

               ((j == 9) && (i == 3))||
               ((j == 9) && (i == 14))||

               ((j == 10) && (i == 3))||
               ((j == 10) && (i == 14))||

               ((j == 10) && (i == 5))||
               ((j == 10) && (i == 12))||

               ((j == 10) && (i == 7))||
               ((j == 10) && (i == 8))||
               ((j == 10) && (i == 9))||
               ((j == 10) && (i == 10))||

               ((j == 11) && (i == 3))||
               ((j == 11) && (i == 14))||

               ((j == 11) && (i == 5))||
               ((j == 11) && (i == 12))||

               ((j == 12) && (i == 3))||
               ((j == 12) && (i == 14))||

               ((j == 12) && (i == 5))||
               ((j == 12) && (i == 6))||
               ((j == 12) && (i == 7))||
               ((j == 12) && (i == 8))||
               ((j == 12) && (i == 9))||
               ((j == 12) && (i == 10))||
               ((j == 12) && (i == 11))||
               ((j == 12) && (i == 12))||

               ((j == 13) && (i == 3))||
               ((j == 13) && (i == 14))||


               ((j == 14) && (i == 3))||
               ((j == 14) && (i == 4))||
               ((j == 14) && (i == 5))||
               ((j == 14) && (i == 6))||
               ((j == 14) && (i == 7))||
               ((j == 14) && (i == 8))||
               ((j == 14) && (i == 9))||
               ((j == 14) && (i == 10))||
               ((j == 14) && (i == 11))||
               ((j == 14) && (i == 12))||
               ((j == 14) && (i == 13))||
               ((j == 14) && (i == 14))

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
