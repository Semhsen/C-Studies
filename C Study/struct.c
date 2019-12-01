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
personel p1;
printf("sicil:");scanf("%d",&p1.sicil);
printf("ad:");scanf("%s",p1.ad);
printf("soyad:");scanf("%s",p1.soyad);
printf("burut maas:");scanf("%d",&p1.brut);
printf("yas:");scanf("%d",&p1.yas);
printf("cins:");scanf("%d",&p1.cins);
printf("\n%d %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.brut,p1.yas,p1.cins);
getch();
}
