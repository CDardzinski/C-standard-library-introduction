/*
Operacje na tekstach
Funkcje pamiêci MEMMOVE
Kopiuje obszary pamiêci, które mog¹ czêœciowo na siebie nachodziæ
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Wypisuje zawartoœæ tablicy
//--------------------------
void pi(char c, int *x, int n)
{
    int i;

    printf("%c[] = ", c);
    for(i = 0; i < n; i++) printf("%3d", x[i]);
    printf("\n");
}
int main()
{
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    setlocale(LC_ALL, "");

    printf("\nPrzed: \n");
    pi('t', t, 9);
    memmove(&t[2], &t[4], 5*sizeof(int));
    //memmove(t, &t[2], 7 * sizeof(int));
    printf("\nPo:\n");
    pi('t', t, 9);

    return 0;
}
