/*
Bity
Przesuniêcie bitowe w prawo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Wczytuje liczbê dwójkow¹
//------------------------
unsigned rb(){

    char *p, t[17];
    unsigned w = 0;

    printf("Liczba binarna (max 16 cyfr) = ");
    scanf("%16s", t);

    for(p = t; *p; p++){
        w += w;
        w += *p - '0';
    }
    return w;
}

//Wyœwietla v jako liczbê dwójkow¹
//--------------------------------
void pb(unsigned v){

    unsigned maska;

    for(maska = 1 << 15; maska; maska >>= 1)
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
        printf(" >> %d = ", i);
        pb(a >> i);
        printf("\n");
    }
    return 0;
}
