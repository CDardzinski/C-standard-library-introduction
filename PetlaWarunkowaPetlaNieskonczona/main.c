/*
P�tla warunkowa
P�tla WHILE jako p�tla niesko�czona
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    while(1)printf("Witamy w C\t");

    return 0;
}

//p�tla if wykonuje warunkowo swoj� instrukcj� tylko jeden raz, nie ma tutaj powrotu do spradzania warunku, ale z do�wiadczenia wiem, �e mo�na go wymusi�, aby zosta� sprawdzony jeszcze raz

//p�tla while wykonuje warunkowo powtarzanie swojej instrukcji, po ka�dym obiegu p�tli nast�puje powr�t do sprawdzenia warunku, przydaje si� wiedza na temat tego, jak dzia�a WHILE, bo w kilku miejscach sprawdza si� lepiej ni� instrukcja warunkowa IF
