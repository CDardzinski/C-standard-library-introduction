/*
Bity
Przesuniêcie bitów w lewo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Wczytuje liczbê dwójkow¹
//------------------------

unsigned rb(){

    char *p, t[9];
    unsigned w = 0;

    printf("Liczba binarna (max 8 cyfr) = ");
    scanf("%8s", t);

    for(p = t; *p; p++){
        w += w;
        w += *p - '0';
    }
    return w;
}

//Wyœwietla v  jako liczbê dwójkow¹
//---------------------------------
void pbn(unsigned v, unsigned b){

    unsigned maska;

    for(maska = 1 << b; maska; maska >>= 1)
        if(v & maska)   putchar('1');
        else            putchar('0');
}

int main(){

    unsigned a = rb();
    int i;

    setlocale(LC_ALL, "");

    printf("\n");
    for(i = 0; i <= 7; i++){
        pbn(a, 8);
        printf(" << %d = ", i);
        pbn(a << i, 16);
        printf("\n");
    }
    return 0;
}
