/*
Typy danych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    printf("char: %d B = %2d b\n", sizeof(char), 8 * sizeof(char));
    printf("int: %d B = %2d b\n", sizeof(int), 8 * sizeof(int));
    printf("unsigned: %d B = %2d b\n", sizeof(unsigned), 8 * sizeof(unsigned));
    printf("float: %d B = %2d b\n", sizeof(float), 8 * sizeof(float));

    return 0;

}
