#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
 char ogrno[10];
 char ad[10];
 char soyad[10];
 int ara;
 int fin;
 float bn;
}ogrenci;
ogrenci ogr[3];char sec;int k;

liste(){for(k=0;k<3;k++){printf("\nliste");
printf("\nogrno:%s",ogr[k].ogrno);printf("\nad:%s",ogr[k].ad);
printf("\nsoyad:%s",ogr[k].soyad);printf("\narasýnav:%d",ogr[k].ara);
printf("\nfinal:%d",ogr[k].fin);printf("\nbasari:%f",ogr[k].bn);}
getch();return;}
main(){for(k=0;k<3;k++){
printf("ogrno:");scanf("%s",ogr[k].ogrno);
printf("ad:");scanf("%s",ogr[k].ad);
printf("soyad:");scanf("%s",ogr[k].soyad);
printf("arasinav:");scanf("%d",&ogr[k].ara);
printf("final:");scanf("%d",&ogr[k].fin);
ogr[k].bn=ogr[k].ara*0.3+ogr[k].fin*0.7;}
while(1){printf("\n1-noya göre arama");
printf("\n2-soyada göre arama");
printf("\n3-liste");
printf("\n4-basarili olanlar");
printf("\n4-CIKIS");sec=getch();
if(sec=='9')break;
if(sec=='3')liste;
}
printf("BÝTTÝ");
getch();
}
