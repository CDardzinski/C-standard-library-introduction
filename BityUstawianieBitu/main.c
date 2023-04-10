/*
Bity
Ustawianie bitu
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

//Wyœwietl v jako liczbe dwójkow¹
//-------------------------------
void pb(unsigned v){

    unsigned maska;
    for(maska = 1 << 7; maska; maska >>= 1)
        if(v & maska)   putchar('1');
        else            putchar('0');
}

int main(){

    unsigned a = rb();
    int i;

    setlocale(LC_ALL, "");

    printf("\n");
    for(i = 0; i <= 7; i++){
        pb(a);
        printf(" : ustawienie bitu nr %d = ", i);
        pb(a | (1 << i));
        printf("\n");
    }
    return 0;
}
