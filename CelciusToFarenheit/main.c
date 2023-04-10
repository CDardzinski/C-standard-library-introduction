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

    printf("Przeliczanie temperatury w skali Celsjusza na temperaturê w skali Fahrenheita\n"
           "-----------------------------------------------------------------------------\n\n");

    Tc = 25;
    Tf = 32 + 9.0/5 * Tc;//9.0, dlatego, ¿e reszta w przypadku dzielenia liczb ca³kowitych nie jest uwzglêdniania co daje z³y wynik

    printf("Temperatura w skali Celsujsza   : %4d\n"
           "Temperatura w skali Fahrenheita : %4d\n\n", Tc, Tf);

    return 0;

    //Format %4d oznacza liczbê dziesiêtn¹ ze znakiem, która bêdzie
    //wpisywana w polu o szerokoœci 4 znaków z dosuniêciem do prawej krawêdzi tego pola.

}
