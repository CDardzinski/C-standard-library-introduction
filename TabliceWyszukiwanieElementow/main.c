/*
Tablice Wyszukiwanie Elementów
W programie podajmeny w zmiennej n rozmiar tablicy.
Umo¿liwia nam to trzywanie w jednej z komórek liczby 0.
Rozwi¹zanie zagwostki z wczesniejszego przyk³adu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 10; //liczba elemntów
    int t[] = { 6, -4, 3, 11, 2, -5, 8, -20, 9, 1}; //tablica do przeszukania
    int i;

    setlocale(LC_ALL, "");

    printf("Liczby dodatnie: ");
    for(i = 0; i < n; i++) if(t[i] > 0) printf("%4d", t[i]);

    printf("\nLiczby ujemne: ");
    for(i = 0; i < n; i++) if(t[i] < 0) printf("%4d", t[i]);

    printf("\nLiczby parzyste: ");
    for(i = 0; i < n; i++) if(!(t[i] % 2)) printf("%4d", t[i]);

    printf("\nLiczby podzielne przez 3 : ");
    for(i = 0; i < n; i++) if(!(t[i] % 3)) printf("%4d", t[i]);

    printf("\n\n");

    return 0;
}
