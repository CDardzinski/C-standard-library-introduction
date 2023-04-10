/*
Tablice
Sortowanie przez wstawianie
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; // liczba elementów w tablicy
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1}; //tablica do przeszukania
    int i,j,x;

    setlocale(LC_ALL, "");

    printf("Przed sortowaniem:\t");
    for(i = 0; i < n; i++) printf("%4d", t[i]);

//sortowanie przez wstawianie

for(i = n - 2; i >= 0; i--){ //pozycja wybieranego elementu
    x = t[i];   //zapamiêtujemy wybrany element
    for(j = i + 1; j < n; j++) //pozycja elementów listy
        if(x <= t[j]) break;
        else t[j - 1] = t[j];//przesuwamy element listy
        t[j - 1] = x; //wybrany element umieszczmy na liœcie
}

printf("\n\nPo sortowaniu:\t\t");
for(i = 0; i < n; i++) printf("%4d", t[i]);
printf("\n\n");

return 0;
}
