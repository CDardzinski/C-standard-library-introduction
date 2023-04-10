/*
Struktury
Inicjalizacja w tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct TPracownik
{
    char i[10];
    char n[12];
    int w,p;
};

int main()
{
    struct TPracownik t[]=  {
                                {"Jan", "Kowalski", 44, 2150},
                                {"Grzegorz", "Liska", 52, 1800},
                                {"Anna", "Matuszewska", 31, 12700},
                                {"Barbara", "Nowakowska", 35, 1750},
                                {"Kazimierz", "Grochowski", 48, 3600},
                                {"","", 0, 0} //ostatni rekord
                            };
    int i;

    setlocale(LC_ALL, "");

    printf("+--------------------------------------+\n"
           "|Firmowa baza danych pracowniczych 2020|\n"
           "+------------+----------+----+---------+\n"
           "|NAZWISKO    |IMIÊ      |WIEK|PENSJA   |\n"
           "+--------------------------------------+\n");
    for(i = 0; t[i].w; i++)
        printf("|%-12s|%-10s| %2d |%5d PLN|\n", t[i].n, t[i].i, t[i].w, t[i].p);
    printf("+------------+----------+----+---------+\n");

return 0;
}
