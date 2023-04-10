/*
Pêtla Warubnkowa FOR, która dzia³a jak pêtla WHILE
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

//    int i; //liczby nieparzyste
    int i = 0; //dla pêtli nieskoñczonej
    int g = 1000;//granica sumowania
    unsigned s = 0; //suma

    setlocale(LC_ALL,"");

//Wersja 1, program wykonywany do granicy g
    //for (i = 1; s < g; i += 2){ //Warunek for(a,b,c), w tym wypadku b nie jest zwi¹zany z wartoœci¹ licznika pêtli
      //  s += i;
       // printf("suma = %d\n", s);
    //}

    for(;; i++) printf ("%10d", i); //pêtla nieskoñczona z pominiêciem warunków wykonywania pêtli
    return 0;

}
