/*
Instrukacja warunkowa
p�tla IF
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float x = -12.7;    //tutaj wpisz warto��
    float absx = x;

    setlocale(LC_ALL,"");

    if(x < 0) absx = -x;
    printf("abs(%f) = %f\n\n", x, absx);

    return 0;

}
