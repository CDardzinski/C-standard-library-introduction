/*
Wskaüniki
Prezentacja cech wskaünikÛw i zminnych wskaünikowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *p; //wskaünik do zmiennej typu int
    int a,b;

    setlocale(LC_ALL, "");

    a = 10;
    b = 99;
    p = &a; // p wskazuje zawartoúÊ a
    printf("a = %d\n", *p);
    p = &b;
    printf("b = %d\n", *p);

    return 0;

}
