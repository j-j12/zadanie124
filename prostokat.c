#include <stdio.h>
#include <stdlib.h>

int main()
{

int a;
int b;
int licznik;
int podstawa;
int wysokosc;
 printf("wybierz funkcje \n");
 printf("1. pole prostokata \n");
 printf("2. pole trojkata \n");
 printf("3. wyjscie \n");
 scanf("%d", &licznik);
int wynik;
switch (licznik)
{

case 1:
    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &b);
    if (a>0 && b>0){
    wynik = a*b;
    printf("wynik=" "%d\n", wynik);
    }
    else
    printf("boki musza byc wieksze od zera!\n");

    break;
case 2:
    printf("wprowadz dlugosc podstawy\n");
    scanf("%d", &podstawa);
    printf("wprowadz dlugosc wyskoœci\n");
    scanf("%d", &wysokosc);
    if (podstawa>0 && wysokosc>0){
    wynik = 0.5*podstawa*wysokosc;
    printf("wynik=" "%d\n", wynik);
    }
else
    printf("podstawa i wysokosc musza byc wieksze od zera!\n");
    break;
case 3:
    break;

default:
    printf("zly wybor\n");
}
}
