/*Tablice
Wyszukiwanie danego zadanego elemntu w tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; //Liczba element�w w tablicy
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1}; //tablica do poszukiwa�
    int v = -20; //warto�� szukana
    int i;

    setlocale(LC_ALL, "");

    for(i = 0; i < n; i++) if(t[i] == v) break;
    if(i < n)   printf("Element %d na pozycji %d\n\n", v, i);
    else        printf("Elementu %d nie ma w tablicy\n\n", v);

    return 0;
}
