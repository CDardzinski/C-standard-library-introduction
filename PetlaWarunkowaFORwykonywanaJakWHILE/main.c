/*
P�tla Warubnkowa FOR, kt�ra dzia�a jak p�tla WHILE
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//    int i; //liczby nieparzyste
    int i = 0; //dla p�tli niesko�czonej
    int g = 1000;//granica sumowania
    unsigned s = 0; //suma

    setlocale(LC_ALL,"");

//Wersja 1, program wykonywany do granicy g
    //for (i = 1; s < g; i += 2){ //Warunek for(a,b,c), w tym wypadku b nie jest zwi�zany z warto�ci� licznika p�tli
      //  s += i;
       // printf("suma = %d\n", s);
    //}

    for(;; i++) printf ("%10d", i); //p�tla niesko�czona z pomini�ciem warunk�w wykonywania p�tli
    return 0;

}
