/*
Celsujsz to Farenheit
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int Tf,Tc;

    setlocale(LC_ALL,"");

    printf("Przeliczanie temperatury w skali Celsjusza na temperatur� w skali Fahrenheita\n"
           "-----------------------------------------------------------------------------\n\n");

    Tc = 25;
    Tf = 32 + 9.0/5 * Tc;//9.0, dlatego, �e reszta w przypadku dzielenia liczb ca�kowitych nie jest uwzgl�dniania co daje z�y wynik

    printf("Temperatura w skali Celsujsza   : %4d\n"
           "Temperatura w skali Fahrenheita : %4d\n\n", Tc, Tf);

    return 0;

    //Format %4d oznacza liczb� dziesi�tn� ze znakiem, kt�ra b�dzie
    //wpisywana w polu o szeroko�ci 4 znak�w z dosuni�ciem do prawej kraw�dzi tego pola.

}
