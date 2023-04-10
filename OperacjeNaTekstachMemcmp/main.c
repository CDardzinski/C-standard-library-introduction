/*
Operacje na tekstach
Funkcje pamiêci MEMCMP
Porownuje ze sob¹ dwa obszary pamiêci
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char a[] = {2, 3, 5, 5, 7, 2, 8, 1, 9};
    char b[] = {2, 3, 5, 5, 7, 2, 8, 1, 9};
    char c[] = {2, 3, 5, 5, 7, 0, 8, 1, 9};
    char d[] = {2, 3, 5, 5, 7, 2, 9, 1, 9};

    setlocale(LC_ALL, "");

    printf("a i b -> %2d\n", memcmp(a, b, 9));
    printf("a i c -> %2d\n", memcmp(a, c, 9));
    printf("a i d -> %2d\n", memcmp(a, d, 9));

    return 0;
}
