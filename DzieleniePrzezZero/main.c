/*
Dzielenie przez Zero
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a,b;

    setlocale(LC_ALL,"");

    a=5;
    b=0;

    printf("Wynik: %d\n\n", a/b);

    return 0;

    //Pomimo prawdi�owej kompilacji program nie dzia�a, gdy� jest b��d logiczny, dzielnie przez zero
}
