/*
Petla iteracyjna for
kontrola liczby obieg�w
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i; //licznik p�tli
    unsigned p = 1; //pot�gi 2 //unsigned znaczy tyle co zmienna int bez znaku, tak to rozumiem

    setlocale(LC_ALL,"");

    for(i = 0; i <= 31; i++){
        printf("2^%d = %u\n", i, p); //%u oznacza wypisanie zmiennej int bez znaku
        p += p;
    }
    return 0 ;
}
