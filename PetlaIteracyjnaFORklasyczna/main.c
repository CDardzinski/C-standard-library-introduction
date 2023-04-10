/*
Petla iteracyjna for
klsayczny for
to samo co przed chwil¹ w FORnaBazieWHILE
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i; //licznik pêtli

    setlocale(LC_ALL,"");

//    for(i = 1; i <= 20; i++) printf("Obieg nr %2d\n", i); //obieg co 1

    for(i = 0; i <= 20; i += 2) printf("Obieg nr %d\n", i); //Dodajemy od razu 2 do licznika obiegu pêtli

    return 0;
}
