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
    if(!(2 + 2 != 4)) printf("NIE!!!\n"); //Oczywiœcie wynik jest ¿artem, poniewa¿ sprawdzamy czy zanegowane 4 jest 4, a tak nie jest
    else printf("Tak\n");                   //osobiœcie uwa¿am to za s³aby przyk³ad, za mocno przekombinowany, aby pokazaæ czym jest negacja

    return 0;

}
