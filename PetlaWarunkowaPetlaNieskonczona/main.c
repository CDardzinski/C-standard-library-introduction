/*
Pêtla warunkowa
Pêtla WHILE jako pêtla nieskoñczona
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    while(1)printf("Witamy w C\t");

    return 0;
}

//pêtla if wykonuje warunkowo swoj¹ instrukcjê tylko jeden raz, nie ma tutaj powrotu do spradzania warunku, ale z doœwiadczenia wiem, ¿e mo¿na go wymusiæ, aby zosta³ sprawdzony jeszcze raz

//pêtla while wykonuje warunkowo powtarzanie swojej instrukcji, po ka¿dym obiegu pêtli nastêpuje powrót do sprawdzenia warunku, przydaje siê wiedza na temat tego, jak dzia³a WHILE, bo w kilku miejscach sprawdza siê lepiej ni¿ instrukcja warunkowa IF
