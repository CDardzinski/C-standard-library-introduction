/*
Funkcje
U¿ycie paramterów jak zmiennych, które otrzyma³y jakoœ wartoœæ
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Oblicza najwiêkszy wspólny dzielnik a i b
//-----------------------------------------

unsigned nwd(unsigned a, unsigned b){

    unsigned r;

    while(b){

        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(){

    unsigned a,b,c;

    setlocale(LC_ALL, "");

    printf("Skracanie ulamkow\n"
           "-----------------\n\n");

    printf("licznik = ");
    scanf("%u", &a);

    printf("mianownik = ");
    scanf("%u", &b);

    c = nwd(a,b);

    printf("\n\n%u/%u = %u/%u\n\n", a, b,a/c, b/c);

    return 0;
}
