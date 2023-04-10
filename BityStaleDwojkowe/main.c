/*
Sta³e
Sta³e ca³kowite dwójkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Wyœwietla b koñcowych bitów argumentu v
//---------------------------------------

void pbn(unsigned v, unsigned b){

    unsigned maska;

    for(maska = 1 << (b - 1); maska; maska >>= 1)
        if(v & maska)   putchar('1');
        else            putchar('0');
}
int main(){

    unsigned a = 0b10111; //sta³e dwójkowe zawsze zpisujemy z prefiksem 0b

    setlocale(LC_ALL, "");

    printf("BIN = ");
    pbn(a, 5);
    printf(" DEC = %d\n", a);

    return 0;
}
