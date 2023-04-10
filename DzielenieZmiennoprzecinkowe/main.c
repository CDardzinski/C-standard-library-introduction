/*
Dzielenie zmiennoprzecinkowe
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
    x = a / 2.0;

    printf("Wynik: %f\n\n", x);

    return 0;

    //Je¿eli argument 2.0 jest liczb¹ zmiennoprzecinkow¹, to i wynik bêdzie zmeinnoprzecinkowy
}
