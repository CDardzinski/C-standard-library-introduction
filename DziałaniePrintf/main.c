/*
 Funkcja printf

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int a;
  char b;
  float c;

  setlocale(LC_ALL,"");

  a = 27;
  b = 65; // Kod litery A
  c = 3.141592;

  printf("Liczba dziesiêtna : %d\n",136);               //%d wyœwietlenie liczby ca³kowitej ze znakiem, \n znak koñca linii, (symbol %d mo¿na zamiennie u¿yæ %i)
  printf("Dwie liczby dziesiêtne : %d %d\n",524,a);     //%d jak wy¿ej
  printf("Liczba ósemkowa : %o\n",12);                  //%o wyœwietlenie liczby ósemkowej
  printf("Liczba dziesiêtna i ósemkowa: %d %o\n",9,9);  // dwa powy¿sze po³¹czone
  printf("dec oct hex : %d %o %x\n",100,100,100);       //%x wyœwietlenie liczby szesnastkowej z ma³ymi literami, jak siê zamienie na %X bêdê wielkie litery
  printf("Znak i jego kod : %c %d\n",b,b);              //%c wyœwietlenie znaku
  printf("Liczba pi : %f\n\n",c);                       //%f liczba zmiennoprzecinkowa, ma³e e, %F wielkie E
                                                        //%s wyœwielenie tekstu

  return 0;
}
