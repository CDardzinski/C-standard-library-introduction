/*
Typy danych
Prezycja wyœwietlania liczb zmiennoprzecinkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //float x = 123.456789;

    float x = 0.1;

    setlocale(LC_ALL,"");

    //printf("%f\n", x);  //wynik 123.456787, poniewa¿ typ float ma precyzje 7 cyfr tylko, resztê próbuje zaokr¹gliæ

    printf("%16.14f\n", x); //wynik 0.10000000149012, poiewa¿ u³amek 1/10 ma nieskoñczone rozwiniêcie w kodzie dwójkowym

    return 0;
}
