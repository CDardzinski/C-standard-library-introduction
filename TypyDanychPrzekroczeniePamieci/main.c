/*
Typy danych
Przekroczenie zakresu typu danych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//  unsigned char c = 65; // zmienna typu char bez znaku (unsigned) czyli w kodzie NBC, binarnym
    signed char c = 65; //zmienna typu char ze znakiem, czyli w kodzie U2, wartoœci mog¹ byæ z minusem

    setlocale(LC_ALL,"");

    printf("%d\n", c);
        c += 65; //c = 165
    printf("%d\n", c);
        c += 65; // c = 265?
    printf("%d\n", c);

    return 0;

}
