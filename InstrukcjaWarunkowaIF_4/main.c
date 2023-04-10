/*
Instrukcja warunkowa
pêtla IF
u¿ycie if(...)else(...)
Przyk³ad 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 7; //tutaj wpisz wartoœæ

    setlocale(LC_ALL,"");

    if(a % 2) printf("%d jest nieparzyste\n", a); //% oznacza resztê z dzielenia, tzw. dzielenie modulo tylko na liczbach ca³kowitych
    else      printf("%d jest parzyste\n", a);

/*Program dzia³a tak, je¿eli to co w nawiasie a%2 jest logicznie ró¿ne od zera,
to to wypisuje, je¿eli to co jest w nawiasie stanowi logiczne zero, to przechodzi do
funkcji else
*/
    return 0;
}
