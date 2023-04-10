/*
Operacje na tekstach
Funkcje pami�ci MEMSET
Wype�nia obszar pami�ci wybran� zawarto�ci�
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

   // memset(t, -55, 10); //wype�niamy t liczn� -55
    memset(t, 0, 10*sizeof(float)); //zerujemy t
    for(i = 0; i < 10; i++) printf("t[%d] = %f\n", i, t[i]);

    return 0;
}
