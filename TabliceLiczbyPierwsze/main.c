/*
Tablice
Tablica 1000 elementów wype³niona liczbami pierwszymi
W komórce 0 zostaje umieszczona wartoœæ 2. Liczba pierwsza i jednyna parzysta.
W osobnej tabeli zapamiêtujemy iloœæ liczb pierwszych.
Liczby pierwsze wyszukane za pomoc¹ ich w³asnoœci niepodzielnoœci przez wszczeœniejsze liczby pierwsze, które bêdê pobierane z tablicy.
Jeœli jest ok, to dopisujemy do tablicy.
I tak do 1000.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    unsigned tlp[1000]; //tablica liczb pierwszych
    unsigned p, i, j; //zmienne robocze
    char test; //do testowania podzielnoœci

    setlocale(LC_ALL, "");

    tlp[0] = 2; //pierwsza liczba pierwsza
    p = 3; // pierwszy kandydat na drug¹ liczbê pierwsz¹

    for(i = 0; i < 1000; i++){
        do{
            test = 1; //zak³adam, ¿e p jest liczb¹ pierwsz¹
            for(j = 1; j < i; j++) //sprawdzenie podzielnoœci przez poprzedni¹ liczbê pierwsz¹
            if(!(p % tlp[j])){// jeœli p jest podzielne
                test = 0;
                break;
            }
            //do poki test jest 1 to nie przejdzie !test, gdy¿ !test, aby umo¿liwi³o
            //wejœcie w t¹ instrukcje warunkow¹ musi byæ ró¿ne od zera
            if(!test) p += 2;//jesli p nie jest pierwsze, to nastepne
        }
        while(!test);//jeœli p jest pierwsze

        /* konstrukcja pêtli do ... while ...

        do{
            instrukcja [1];
            instrukcja [2];
            instrukcja [3];
            ...
            ...
            instrukcja [n];

        }while(warunek);
        Najpierw s¹ wykonywane istrukcje, a potem jest przyrówanie wartoœci do warunku, jeœli jest ró¿na od zera, to ponownie wykonuje instrukcje i wraca do sprawdzenia warunku.
        Jeœli warunek jest równy zero, to nastepuje wyjœcie z pêtli i program leci dalej
        */


        tlp[i] = p; //to dopisujemy je do tablicy
        p += 2; //nastêpne p
    }
    printf("1000 liczb pierwszych:\n\n");
    for(i = 0; i < 1000; i++) printf("%5u", tlp[i]);
    printf("\n\n");

    return 0;
}
