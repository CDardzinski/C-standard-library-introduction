/*
Funkcje
Przechowywanie informacji w zmiennych globalnych
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Zmienne globalne
//----------------

unsigned p1, p2 = 3;

//Funkcja wyszukuje parê liczb bliŸniaczych
//-----------------------------------------

void tp(){

    unsigned i,g;
    char test;

    do{ //do .. while.. sprawdza dopóki warunek nie zostnie spe³niony, a potem robi
        p1 = p2; //druga liczba bêdzie pierwsz¹
        p2 = p1 + 2; //kolejny kandydat na liczbê pierwsz¹
        do{ //sprawdzamy, czy p2 jest pierwsze
            test = 1;
            g = sqrt(p2);
            for(i = 3; i <= g; i += 2)
                if(!(p2 % i)){
                test = 0;
                break; //przerywa dzia³anie pêtli
            }
            if(!test) p2 += 2; //jeœli nie, to nastepnie p2
        }
        while(!test); //kontunuujemy, a¿ p2 bêdzie pierwsze
    if(p2 - p1 == 2)
        printf("%u i %u\n", p1, p2);

    }while(p2 - p1 != 2); //kontynuujemy, a¿ p1 i p2 bêd¹ bliŸniacze
}

int main(){

    int n;

    setlocale(LC_ALL, "");

    printf("Ile par liczb bliŸniaczych? n = ");
    scanf("%d", &n);

    while(n--)
        tp();

    return 0;
}
