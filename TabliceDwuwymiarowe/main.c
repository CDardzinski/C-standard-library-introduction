/*
Tablice
Dwuwymiarowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a[3][4] = {     //inicjalizacja tablicy dwuwymiarowej wygl¹da tak
                    {1, 7, 2, 5},
                    {8, 3, 3, 9},
                    {6, 2, 4, 5}
                };
    int i, j;

    setlocale(LC_ALL, "");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++) printf("%3d", a[i][j]);
        printf("\n");
    }
    return 0;
}
