/*
P�tla iteracyjna for
na bazie p�tli while
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i = 1; //licznik p�tli

    setlocale(LC_ALL,"");

    while(i <= 20){

        printf("Obieg nr %2d\n", i);
        i++;
    }
    return 0;
}
