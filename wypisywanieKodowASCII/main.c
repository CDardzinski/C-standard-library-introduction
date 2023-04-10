/*
Tablice
Wyœwietlanie
Pojedyncze komórki tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>>

int main(){

    int i;

    setlocale (LC_ALL,"");

    for(i =0; i < 128; i++)
    printf("%d = '%c', kod %3u Dec, %x Hex, %b\n", i, i, i, i, i);

    return 0;
}
