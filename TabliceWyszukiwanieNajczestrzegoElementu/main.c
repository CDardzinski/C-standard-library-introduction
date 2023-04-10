/*
Tablice
Wyszukiwanie najczeœciej wystepuj¹cego elementu

Muszę wrócić do tego i przejrzeć jeszcze raz, bo są tu kwestie których nie rozumiem
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 100; //liczba elementow
    int t[] = {3, 6, 13, 6, 5, 7, 2, 3, 1, 7, 4, 3, 1, 7, 12, 15, 11, 4, 8, 1,
               5, 4, 9, 4, 8, 2, 6, 5, 4, 11, 3, 8, 13, 4, 8, 6, 3, 7, 3, 8,
               9, 5, 7, 8, 7, 9, 3, 11, 7, 5, 1, 12, 6, 2, 1, 2, 6, 3, 12, 10,
               11, 8, 1, 2, 9, 4, 8, 15, 9, 2, 0, 5, 3, 17, 3, 3, 9, 12, 5, 3,
               2, 4, 0, 10, 3, 2, 1, 4, 3, 16, 7, 2, 2 ,1, 5, 4, 8, 1, 9, 2};
    int lmax = 0; //licznik najczêstszej wartosci
    int vmax; //najczêstsza wartoœæ
    int ln; //licznik pomocniczy
    int vn; //zliczana wartoœæ
    int i,j;

    setlocale(LC_ALL, "");

    for(i = 0; i < n; i++){//przegl¹damy kolejne elementy
            vn = t[i]; //zapamiętujemy bieżący element
            ln = 1; //ustawiamy licznik jego wystapień
        for(j = i + 1; j < n; j++) //przeglądamy reszte talicy
            if(t[j] == vn) ln++; //i zliczamy bie¿¹cy element
    if(ln > lmax){ //jeœli bie¿¹cy powtarza siê czêœciej od zapamiêtanego,
        lmax = ln; //to zapamiêtujemy bie¿¹cy
        vmax = vn;
        }
    }
    printf("v = %d, l = %d\n\n", vmax, lmax);

    return 0;
}
