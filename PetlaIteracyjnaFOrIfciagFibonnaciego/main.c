/*
Petla iteracyjna
Petla For z instukcj¹ warunkow¹ IF
obliczanie ci¹gu Fibonnaciego
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int i; //licznik pêtli
    int n = 4; // numer ostatniej przyjêtej liczby Fibonnaciego
    unsigned f, f1, f2; //kolejno obliczane liczby

    setlocale(LC_ALL, "");

    for(i = 0; i <= n; i++){
        if(i < 2)f = i;
        else f = f2 + f1;
        printf("f(%d) = %d\n", i, f);
        f2 = f1;    //element programowania dynamicznego, nawet nie widzia³em, ¿e to siê tak nazywa
        f1 = f;
    }
    return 0;
}
