/*
Tablice
Umieszczenie danych w dowaolnej kom�rce i przesuwanie pozosta�cyh
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; //liczba element�w
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1};//Tablica do prszeszukania
    int i;
    int p = 5; //pozycja na kt�r� wstawiam
    int v = 999; //wstawiana warto�� na pozycj� 5

    setlocale(LC_ALL, "");

    printf("Przed: \n");
    for(i = 0; i < n; i++)
        printf("t[%d] = %4d\n", i, t[i]);

//wstawiamy element

for(i = n - 2; i >= p; i--) t[i+1] = t[i];
t[p] = v;

printf("\nPo: \n");
for(i = 0; i < n; i++) printf("t[%d] = %4d\n", i, t[i]);
printf("\n\n");

return 0;

}

