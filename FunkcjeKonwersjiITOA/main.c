/*
Konwersje znakowo - liczbowe
Konwersja ITOA (integer to ASCII string)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char buf[50];
    int n, i;

    setlocale(LC_ALL, "");

    printf("liczba = ");
    scanf("%d", &n);
    printf("\n");
    for(i = 2; i <= 16; i++)
        printf("%d(10) = %s(%d)\n", n, itoa(n , buf, i), i);
    return 0;
}

