/*
Wska�niki
Prezentacja cech wska�nik�w i zminnych wska�nikowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *p; //wska�nik do zmiennej typu int
    int a,b;

    setlocale(LC_ALL, "");

    a = 10;
    b = 99;
    p = &a; // p wskazuje zawarto�� a
    printf("a = %d\n", *p);
    p = &b;
    printf("b = %d\n", *p);

    return 0;

}
