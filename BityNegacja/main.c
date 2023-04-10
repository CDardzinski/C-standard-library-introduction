/*
Bity
Negacja bitowa
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Wczytuje liczbê dwójkow¹
//------------------------

char rb(){

    char w = 0, *p, t[9];

    printf("Liczba binarna (max 8 cyfr) = ");
    scanf("%8s", t);

    for(p = t; *p; p++)
    {
        w += w;
        w += *p - '0';
    }
    return w;
}

//Wyœwietla v jako liczbê dwójkow¹
//--------------------------------

void pb(char v){

    unsigned maska;

    for(maska = 0b10000000; maska; maska >>= 1)
        if( v & maska)  putchar('1');
        else            putchar('0');
}

int main(){

    char a = rb();

    setlocale(LC_ALL, "");

    printf("\n~ ");
    pb(a);
    printf("\n-----------\n");
    printf(" ");
    pb(~a);
    printf("\n\n");

    return 0;
}
