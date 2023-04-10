/*
Sta³e
Znakowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    char a = 'Z';

    setlocale(LC_ALL, "");

    printf("Znak %c ma kod ASCII %d\n", a, a);

    return 0;
}
