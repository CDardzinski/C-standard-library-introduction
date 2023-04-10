/*
Operacje na tekstach
Funkcje pamiêci MEMCPY
Kopiuje zawartoœæ jednego obszaru pamiêci do drugiego
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Wypisuje zawartoœæ tablicy znakowej jako liczby
//-----------------------------------------------
void pc(char c, char *x, int n)
{
    int i;

    printf("%c[] = ", c);
    for(i = 0; i < n; i++) printf("%3d", x[i]);
    printf("\n");
}
int main()
{
    char s[] = {81,82,83,83,85};
    char t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    setlocale(LC_ALL, "");

    pc('s', s, 5);
    printf("\nPrzed: \n");
    pc('t', t, 9);
    memcpy(&t[2], s, 5 * sizeof(int)); // wynik nieokreœlony, czêsciowo pokrywa siê z innym obszarem pamiêci
    //memcpy(&t[2], s, 5);
    printf("\nPo:\n");
    pc('t', t, 9);

    return 0;
}
