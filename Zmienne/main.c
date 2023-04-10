#include <stdio.h>
#include <stdlib.h>


/* Zmienne

char            - znak
int             - liczba ca³kowita ze znakiem w kodzie U2
unsigned int    - licznba ca³kowita bez znaku w kodzie NBC
float           - liczba zmiennoprzecinkowa


Nazwy zmiennych mog¹ zawieraæ znaki:
Podkreœlenie (_)
Du¿e litery (A...Z)
Ma³e litery (a...z) – s¹ rozró¿niane od du¿ych
Cyfry (0...9)
Nie wolno stosowaæ odstêpów i przecinków
Nie wolno stosowaæ innych znaków od podkreœlenia
Pierwszym znakiem nazwy musi byæ litera lub podkreœlenie
Nazwa zmiennej nie mo¿e byæ identyczna z ¿adnym s³owem kluczowym
D³ugoœæ nazwy mo¿e byæ ograniczona np. do 32 znaków, zale¿y to od konkretnego kompilatora.


*/

int a; // Zmienna ca³kowita U2 o nazwie a
unsigned b; // Zmienna ca³kowita NBC o nazwie b
char c; // Zmienna znakowa o nazwie c
float x; // Zmienna zmiennoprzecinkowa o nazwie x




int main()
{

    a = 10;
    b = a * 15; // Do zmiennej b trafi wartoœæ 150


    printf("Hello world!\n");
    return 0;
}
