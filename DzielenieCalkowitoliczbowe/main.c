/*
Dzielenie ca³kowitoliczbowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a;
    float x;

    setlocale(LC_ALL,"");

    a = 5;
    x = a / 2;

    printf("Wynik: %f\n\n", x);

    return 0;

    //W wyniku rozwi¹zania otrzymujemy wartoœæ 2.000000, poniewa¿ zarówno
    //zmienna a, jak i cyfra 2 s¹ liczbami ca³kowitymi, aby otrzymaæ wynik
    //prawid³owy 2.500000, nale¿y zamieniæ 2 na odpowiednik zmiennoprzecinkowy
}
