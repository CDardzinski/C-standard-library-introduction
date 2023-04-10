/*Tablice
Wyszukiwanie najwiêkszego i najmniejszego elementu tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; //liczba elementów w tablicy
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1};//tablica do przeszukania
    int i, elmax, elmin;

    setlocale(LC_ALL, "");

    elmax = elmin = t[0];

    for(i = 1; i < n; i++)if(t[i] > elmax) elmax = t[i];
                        else if (t[i] < elmin) elmin = t[i];
    printf("Element maksymalny: %3d\n", elmax);
    printf("Element minimalny : %3d\n", elmin);

    return 0;

}
