/*
Dzielenie ca�kowitoliczbowe
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

    //W wyniku rozwi�zania otrzymujemy warto�� 2.000000, poniewa� zar�wno
    //zmienna a, jak i cyfra 2 s� liczbami ca�kowitymi, aby otrzyma� wynik
    //prawid�owy 2.500000, nale�y zamieni� 2 na odpowiednik zmiennoprzecinkowy
}
