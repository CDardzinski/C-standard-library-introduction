/*
Instrukcja warunkowa
p�tla IF
u�ycie if(...)else(...)
Przyk�ad 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 7; //tutaj wpisz warto��

    setlocale(LC_ALL,"");

    if(a % 2) printf("%d jest nieparzyste\n", a); //% oznacza reszt� z dzielenia, tzw. dzielenie modulo tylko na liczbach ca�kowitych
    else      printf("%d jest parzyste\n", a);

/*Program dzia�a tak, je�eli to co w nawiasie a%2 jest logicznie r�ne od zera,
to to wypisuje, je�eli to co jest w nawiasie stanowi logiczne zero, to przechodzi do
funkcji else
*/
    return 0;
}
