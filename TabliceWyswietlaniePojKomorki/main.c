/*
Tablice
Wyœwietlanie
Pojedyncze komórki tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>>

int main(){

    char t [] = "Cezary";
    int i;

    setlocale (LC_ALL,"");

    for(i = 0; t[i]; i++)
        printf("t[%d] = '%c', kod %3u\n", i, t[i], t[i]);

    return 0;
}
