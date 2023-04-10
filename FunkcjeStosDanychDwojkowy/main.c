/*
Funkcje
Wpisywanie na stos danych w systemie ósemkowym
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Funkcja wyœwietla podan¹ w parametrze liczbê
//--------------------------------------------

void print(unsigned x){

    char s[32]; //stos
    int sptr = 0; //wskaŸnik stosu
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
