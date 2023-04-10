/*
P�tla warunkowa while
EUKLIDES jak poprzenio
Szukanie NWD dla Du�ych r�nic mi�dzy warto�ciami
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 40; //liczba naturalna
    int b = 24; //liczba naturalna
    int r;  //reszta z dzielenia

    setlocale(LC_ALL,"");

    printf("NWD(%d,%d) = ", a, b);

    while(b){ // warunek nale�y czyta� jako wykonuj dop�ki b jest r�ne od zera
        r = a % b; //dzielenie modulo, bierzemy tylko reszte z dzielnie np: 40/24 = 1 ca�y reszty 16 i te 16 jest wpisywane do r
        a = b;
        b = r;
    }

    printf("%d\n", a);

    return 0;
}
