/*
Operator warunkowy
?:
Obliczenie funkcji signum
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float a = -5.125;

    setlocale(LC_ALL, "");

    printf("Signum(%f) = %d\n", a, a == 0 ? 0 : a > 0 ? 1 : -1);

    return 0;

}
