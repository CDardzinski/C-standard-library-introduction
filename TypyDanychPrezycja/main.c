/*
Typy danych
Prezycja wy�wietlania liczb zmiennoprzecinkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //float x = 123.456789;

    float x = 0.1;

    setlocale(LC_ALL,"");

    //printf("%f\n", x);  //wynik 123.456787, poniewa� typ float ma precyzje 7 cyfr tylko, reszt� pr�buje zaokr�gli�

    printf("%16.14f\n", x); //wynik 0.10000000149012, poiewa� u�amek 1/10 ma niesko�czone rozwini�cie w kodzie dw�jkowym

    return 0;
}
