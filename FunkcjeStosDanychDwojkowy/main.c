/*
Funkcje
Wpisywanie na stos danych w systemie �semkowym
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Funkcja wy�wietla podan� w parametrze liczb�
//--------------------------------------------

void print(unsigned x){

    char s[32]; //stos
    int sptr = 0; //wska�nik stosu
    char c; //cyfra

    do{

        c = '0' + (x % 2);
        s[sptr++] = c; //cyfra na stos
        x = x / 2;
    } while(x);
    while(sptr) putchar(s[--sptr]);
}

int main(){

    unsigned n;

    setlocale(LC_ALL, "");

    printf("DEC = ");
    scanf("%u", &n);

    printf("BIN = ");
    print(n);

    printf("\n\n");

    return 0;
}
