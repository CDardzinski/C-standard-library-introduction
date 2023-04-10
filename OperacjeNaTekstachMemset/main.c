/*
Operacje na tekstach
Funkcje pamiêci MEMSET
Wype³nia obszar pamiêci wybran¹ zawartoœci¹
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    signed char t[10];
    int i;

    setlocale(LC_ALL, "");

   // memset(t, -55, 10); //wype³niamy t liczn¹ -55
    memset(t, 0, 10*sizeof(float)); //zerujemy t
    for(i = 0; i < 10; i++) printf("t[%d] = %f\n", i, t[i]);

    return 0;
}
