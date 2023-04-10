/*
Operator warunkowy
Nie wiem jak dzia³a, nigy nie u¿ywa³em
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float a = -5.64;

    setlocale(LC_ALL,"");

    printf("|%f| = %f\n", a, a >= 0 ? a : -a);

    return 0;

}
