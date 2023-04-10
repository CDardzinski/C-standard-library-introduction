/*
Struktury
Inicjacja
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct TPracownik
{
    char i[10];
    char n[12];
    int w, p;
};

int main()
{
    struct TPracownik p1 = {"Jan", "Kowalski", 44, 2150};
    struct TPracownik p2 = {"Grzegorz", "Liska", 52, 1800};
    struct TPracownik p3 = {"Anna", "Matuszewska", 31, 12700};

    setlocale(LC_ALL, "");

    printf("+--------------------------------------+\n"
           "|Firmowa baza danych pracowniczych 2020|\n"
           "+------------+----------+----+---------+\n"
           "|NAZWISKO    |IMIÊ      |WIEK|PENSJA   |\n"
           "+------------+----------+----+---------+\n");
    printf("|%-12s|%-10s| %2d |%5d PLN|\n", p1.n, p1.i, p1.w, p1.p);
    printf("|%-12s|%-10s| %2d |%5d PLN|\n", p2.n, p2.i, p2.w, p2.p);
    printf("|%-12s|%-10s| %2d |%5d PLN|\n", p3.n, p3.i, p3.w, p3.p);
    printf("+------------+----------+----+---------+\n");

    return 0;
}
