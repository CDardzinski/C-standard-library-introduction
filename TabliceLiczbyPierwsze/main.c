/*
Tablice
Tablica 1000 element�w wype�niona liczbami pierwszymi
W kom�rce 0 zostaje umieszczona warto�� 2. Liczba pierwsza i jednyna parzysta.
W osobnej tabeli zapami�tujemy ilo�� liczb pierwszych.
Liczby pierwsze wyszukane za pomoc� ich w�asno�ci niepodzielno�ci przez wszcze�niejsze liczby pierwsze, kt�re b�d� pobierane z tablicy.
Je�li jest ok, to dopisujemy do tablicy.
I tak do 1000.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    unsigned tlp[1000]; //tablica liczb pierwszych
    unsigned p, i, j; //zmienne robocze
    char test; //do testowania podzielno�ci

    setlocale(LC_ALL, "");

    tlp[0] = 2; //pierwsza liczba pierwsza
    p = 3; // pierwszy kandydat na drug� liczb� pierwsz�

    for(i = 0; i < 1000; i++){
        do{
            test = 1; //zak�adam, �e p jest liczb� pierwsz�
            for(j = 1; j < i; j++) //sprawdzenie podzielno�ci przez poprzedni� liczb� pierwsz�
            if(!(p % tlp[j])){// je�li p jest podzielne
                test = 0;
                break;
            }
            //do poki test jest 1 to nie przejdzie !test, gdy� !test, aby umo�liwi�o
            //wej�cie w t� instrukcje warunkow� musi by� r�ne od zera
            if(!test) p += 2;//jesli p nie jest pierwsze, to nastepne
        }
        while(!test);//je�li p jest pierwsze

        /* konstrukcja p�tli do ... while ...

        do{
            instrukcja [1];
            instrukcja [2];
            instrukcja [3];
            ...
            ...
            instrukcja [n];

        }while(warunek);
        Najpierw s� wykonywane istrukcje, a potem jest przyr�wanie warto�ci do warunku, je�li jest r�na od zera, to ponownie wykonuje instrukcje i wraca do sprawdzenia warunku.
        Je�li warunek jest r�wny zero, to nastepuje wyj�cie z p�tli i program leci dalej
        */


        tlp[i] = p; //to dopisujemy je do tablicy
        p += 2; //nast�pne p
    }
    printf("1000 liczb pierwszych:\n\n");
    for(i = 0; i < 1000; i++) printf("%5u", tlp[i]);
    printf("\n\n");

    return 0;
}
