/*
Bity
Zapoznanie z bitami
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

    unsigned i;

    setlocale(LC_ALL, "");

    for(i = 0; i <= 16; i++){
        pbn(i, 5);
        putchar('\n');
    }
    return 0;
}
