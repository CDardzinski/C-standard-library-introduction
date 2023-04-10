/*
instrukcja warunkowa
pêtla If
Przyk³ad 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float a = 1.2; //tutaj wpisz wartoœæ
    float b = 3.1;
    float c = 2.9;
    float x = a; //najwiêksza liczba

    setlocale(LC_ALL,"");

    if(b > x) x = b;
    if(c > x) x = c;
    printf("Z liczb %6.2f %6.2f %6.2f najwiêksz¹ jest %6.2f\n\n", a, b, c, x);

    return 0;


}
