/*
Tablice
Wype³nianie komórek ci¹giem Fibonacciego w tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int fibo[32];
    int i;

    setlocale(LC_ALL, "");

    fibo[0] = 0; //pierwsze dwie liczby wpisujemy
    fibo[1] = 1; //bezpoœrednio do komórek tablicy

    for(i = 2; i < 32; i++) fibo[i] = fibo[i-2] + fibo[i-1];
    printf("Liczby Fibonacciego: \n");
    for(i = 0; i < 32; i++) printf("f[%2d] = %7d\n", i, fibo[i]);

    return 0;
}
