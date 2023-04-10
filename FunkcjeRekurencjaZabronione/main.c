/*
Funkcje
problemy przy u¿ywaniu rekurencji\
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned fib(unsigned n){

    if(n < 2) return n;
    else return fib(n - 2) + fib (n-1);
}

int main(){

    unsigned i;

    setlocale(LC_ALL, "");

    for (i = 0; i <= 46; i++)
        printf("fib[%2u] = %10u\n", i, fib(i));

    return 0;
}
