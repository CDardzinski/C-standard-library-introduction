/*
P�tla warunkowa while
Szukanie najwi�kszego wsp�lnego dzielnika algorytmem Euklidesa
NWD
moje rozwi�zanie, bardziej czytelne
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a = 400; //liczba naturalna
    int b = 24; //liczba naturalna

    setlocale(LC_ALL,"");

    int a1 = a;
    int b1 = b;

    while (a != b){
        if (a > b){
            a -= b; //-= ten operator oznacza, odejmij i przenie� do a odj�t� warto�� z b
//zapis a-=b; oznacza tyle samo co a = a - b;
        printf("a = %d, b = %d\n", a, b);
        }
    else{
        b -= a;
        printf("a = %d, b = %d\n", a, b);
    }
    }
    if(a==b){

    printf("NWD(%d,%d)= ", a1, b1);
    printf("%d\n", a);
    }

    return 0;

}
