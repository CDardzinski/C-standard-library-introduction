/*
Bity
Sta³e symboliczne
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define POWITANIE "Witamy w C\n"
#define MAXU 4294967295

int main(){

    setlocale(LC_ALL, "");

    printf(POWITANIE);
    printf("Maksymalna liczba bez znaku to %u\n", MAXU);

    return 0;
}
