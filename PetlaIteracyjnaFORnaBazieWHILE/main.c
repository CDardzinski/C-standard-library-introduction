/*
Pêtla iteracyjna for
na bazie pêtli while
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i = 1; //licznik pêtli

    setlocale(LC_ALL,"");

    while(i <= 20){

        printf("Obieg nr %2d\n", i);
        i++;
    }
    return 0;
}
