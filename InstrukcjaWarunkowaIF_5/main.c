/*
Instrukcja warunkowa
p�tla IF
wykorzystane IF else(...)
przyk�ad 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int wiek = 29;  //wpisz sw�j wiek

    setlocale(LC_ALL,"");

    printf("Witaj. Masz lat %d\n", wiek);

    if(wiek < 10) printf("Jeste� dzieckiem ;) \n");
    else if(wiek < 18) printf("Jeste� nastolatkiem\n");
    else if(wiek < 66) printf("Jeste� doros�ym\n");
    else if(wiek < 100)printf("Jeste� seniorem\n");
    else printf("Gratulacje. Pi�kny wiek!\n");

    return 0;

}
