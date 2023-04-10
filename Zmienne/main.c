#include <stdio.h>
#include <stdlib.h>


/* Zmienne

char            - znak
int             - liczba ca�kowita ze znakiem w kodzie U2
unsigned int    - licznba ca�kowita bez znaku w kodzie NBC
float           - liczba zmiennoprzecinkowa


Nazwy zmiennych mog� zawiera� znaki:
Podkre�lenie (_)
Du�e litery (A...Z)
Ma�e litery (a...z) � s� rozr�niane od du�ych
Cyfry (0...9)
Nie wolno stosowa� odst�p�w i przecink�w
Nie wolno stosowa� innych znak�w od podkre�lenia
Pierwszym znakiem nazwy musi by� litera lub podkre�lenie
Nazwa zmiennej nie mo�e by� identyczna z �adnym s�owem kluczowym
D�ugo�� nazwy mo�e by� ograniczona np. do 32 znak�w, zale�y to od konkretnego kompilatora.


*/

int a; // Zmienna ca�kowita U2 o nazwie a
unsigned b; // Zmienna ca�kowita NBC o nazwie b
char c; // Zmienna znakowa o nazwie c
float x; // Zmienna zmiennoprzecinkowa o nazwie x




int main()
{

    a = 10;
    b = a * 15; // Do zmiennej b trafi warto�� 150


    printf("Hello world!\n");
    return 0;
}
