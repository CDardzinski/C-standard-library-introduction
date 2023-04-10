/*
Instrukcja wyboru
Po mojemu switch case
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 6;//tu wpisz liczbê od 0 do 9
                //lub dowoln¹ inn¹

    setlocale(LC_ALL,"");

    printf("%d to ", n);

    switch(n)
    {
    case 0:
        printf("ZERO");
    break;
    case 1:
        printf("JEDEN");
    break;
    case 2:
        printf("DWA");
    break;
    case 3:
        printf("TRZY");
    break;
    case 4:
        printf("CZTERY");
    break;
    case 5:
        printf("PIÊÆ");
    break;
    case 6:
        printf("SZEŒÆ");
    break;
    case 7:
        printf("SIEDEM");
    break;
    case 8:
        printf("OSIEM");
    break;
    case 9:
        printf("DZIEWIÊÆ");
    break;
    default:
        printf("NIE WIEM ILE");
    break;
    }

    printf(".\n");

    return 0;

}
