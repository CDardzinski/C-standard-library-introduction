/*
P�tla warunkowa
while

Przyk�ad dzia�ania p�tli na instukcji prostej
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 0;

    setlocale(LC_ALL,"");

    while(++a < 10000) printf("%d\n", a);

    return 0;

}
