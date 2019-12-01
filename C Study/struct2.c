#include<stdio.h>
#include<conio.h>
main(){typedef struct{
 int sicil;
 char ad[10];
 char soyad[10];
 int yas;
 int brut;
 int cins;
}personel;
personel p1={0,"ayse","ok",37,2500,0};

printf("\n%d %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.brut,p1.yas,p1.cins);
getch();
}
