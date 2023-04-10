/*
Instrukcja warunkowa
pêtla IF
wykorzystane IF else(...)
przyk³ad 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int wiek = 29;  //wpisz swój wiek

    setlocale(LC_ALL,"");

    printf("Witaj. Masz lat %d\n", wiek);

    if(wiek < 10) printf("Jesteœ dzieckiem ;) \n");
    else if(wiek < 18) printf("Jesteœ nastolatkiem\n");
    else if(wiek < 66) printf("Jesteœ doros³ym\n");
    else if(wiek < 100)printf("Jesteœ seniorem\n");
    else printf("Gratulacje. Piêkny wiek!\n");

    return 0;

}
