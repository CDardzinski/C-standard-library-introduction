/*
Funkcje logiczne
Negacja
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    printf("Czy 2 + 2 = 4 ?\t");
    if(!(2 + 2 != 4)) printf("NIE!!!\n"); //Oczywi�cie wynik jest �artem, poniewa� sprawdzamy czy zanegowane 4 jest 4, a tak nie jest
    else printf("Tak\n");                   //osobi�cie uwa�am to za s�aby przyk�ad, za mocno przekombinowany, aby pokaza� czym jest negacja

    return 0;

}
