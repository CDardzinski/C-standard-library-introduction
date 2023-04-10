/*
Tablice
Uzycie indeksu do wyboru komórki
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int a[] = {1,2,3,4,5};  //5 liczb, komórki od a[0] ... [4]
    int i;

    setlocale(LC_ALL, "");

    printf("PRZED: \n");
    for (i = 0; i < 5; i++) printf("a[%d] = %d\n", i, a[i]);
    a[0] = 25;
    a[1] = 59;
    a[4] = 119;
    printf("\nPO: \n");
    for (i = 0; i < 5; i++) printf("a[%d] = %d\n", i, a[i]);

    return 0;

}
