/*
Wskaźniki
Prezentacja cech wskaźników i zminnych wskaźnikowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *p; //wskaźnik do zmiennej typu int
    int a,b;

    setlocale(LC_ALL, "");

    a = 10;
    b = 99;
    p = &a; // p wskazuje zawartość a
    printf("a = %d\n", *p);
    p = &b;
    printf("b = %d\n", *p);

    return 0;

}
