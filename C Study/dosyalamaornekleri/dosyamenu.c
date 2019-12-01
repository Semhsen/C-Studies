#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char sicil[5];
	char ad[10];
	char soyad[10];
	int yas;
	int brut;
	int cins;
	} PERSONEL;
PERSONEL p1;
char devam,sec1;
FILE *fg,*fg1;

ekleme(){system("cls");
  printf("\n*** ekleme ***");
  printf("\nsicil numarasi:");scanf("%s",p1.sicil);
  printf("Ad: ");scanf("%s",p1.ad);
  printf("Soyad: ");scanf("%s",p1.soyad);
  printf("yas: ");scanf("%d",&p1.yas);
  printf("Burut maas: ");scanf("%d",&p1.brut);
  printf("Cinsiyet (1=Erkek, 0=Bayan) ");scanf("%d",&p1.cins);
  printf("eklenilsin mi (e/h)");sec1=getch();
   if(sec1=='e'){fg=fopen("pers.dat","a");
      if(fg==NULL) {printf("dosya acilamiyor");getch();exit(0);}
     if(fwrite(&p1,sizeof(p1),1,fg)!=1) {printf("\nkayit hatasi"); getch();exit(0);}
         printf("\nkayit edildi %s %s %s %d %d %d",
            p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
         fclose(fg);}
    else printf("\nkayit edilmedi");
printf("ek sonu");getch();return;}

liste(){system("cls");
  printf("\n*** listeleme ***");
    fg=fopen("pers.dat","r");
    if(fg==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fread(&p1,sizeof(p1),1,fg);
    while((feof(fg))==0) {
      printf("\n %s %s %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
      fread(&p1,sizeof(p1),1,fg);
      }
    fclose(fg);
printf("\nliste sonu");getch();return;}

guncel(){system("cls");char asicil[5];
  printf("\n*** guncelleme ***");
  printf("\naranan sicil");scanf("%s",asicil);
  fg=fopen("pers.dat","r");
    if(fg==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fg1=fopen("gec.dat","w");
    if(fg1==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fread(&p1,sizeof(p1),1,fg);
    while((feof(fg))==0) {
      if(strcmp(p1.sicil,asicil)==0){
      printf("\n %s %s %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
      printf("\nsicil numarasi:");scanf("%s",p1.sicil);
      printf("Ad: ");scanf("%s",p1.ad);
      printf("Soyad: ");scanf("%s",p1.soyad);
      printf("yas: ");scanf("%d",&p1.yas);
      printf("Burut maas: ");scanf("%d",&p1.brut);
      printf("Cinsiyet (1=Erkek, 0=Bayan) ");scanf("%d",&p1.cins);
      }
       if(fwrite(&p1,sizeof(p1),1,fg1)!=1) {printf("\nkayit hatasi"); getch();exit(0);}
         //printf("\nkayit edildi %s %s %s %d %d %d",
         //   p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
      fread(&p1,sizeof(p1),1,fg);
      }
  fclose(fg);fclose(fg1);
  remove("pers.dat");rename("gec.dat","pers.dat"); 
printf("\nguncelleme sonu");getch();return;}  

silme(){system("cls");char asicil[5];
  printf("\n*** silme ***");
  printf("\nsilinecek sicil");scanf("%s",asicil);
  fg=fopen("pers.dat","r");
    if(fg==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fg1=fopen("gec.dat","w");
    if(fg1==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fread(&p1,sizeof(p1),1,fg);
  sec1='h';
    while((feof(fg))==0) {
      if(strcmp(p1.sicil,asicil)==0){
        printf("\n %s %s %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
        printf("silinsinmi (e/h)");sec1=getch();
        }
    if (sec1!='e'){
      if(fwrite(&p1,sizeof(p1),1,fg1)!=1) {printf("\nkayit hatasi"); getch();exit(0);}
      }
    sec1='h';  
    fread(&p1,sizeof(p1),1,fg);}

  fclose(fg);fclose(fg1);
  remove("pers.dat");rename("gec.dat","pers.dat"); 
printf("\n silme sonu");getch();return;} 

arama(){system("cls");char asicil[5]; int bul=0;
  printf("\n*** arama ***");
  printf("\ngoruntulenecek sicil");scanf("%s",asicil);
  fg=fopen("pers.dat","r");
    if(fg==NULL)  {printf("\ndosya acilamiyor");getch();exit(1);}
  fread(&p1,sizeof(p1),1,fg);
  
    while((feof(fg))==0) {
      if(strcmp(p1.sicil,asicil)==0){
        printf("\n %s %s %s %d %d %d",p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut,p1.cins);
        bul=1;
        }
    fread(&p1,sizeof(p1),1,fg);
    }
fclose(fg);
if (bul==0) printf("\naranan kayit bulunamdi");
printf("\n arama sonu");getch();return;} 

main(){
 while(1){
 system("cls");
 printf("\n1-Ekleme");
 printf("\n2-Guncelleme");
 printf("\n3-Silme");
 printf("\n4-sicil no");
 printf("\n5-listeleme");
 printf("\n9-cikis");
 printf("\nseciminiz (1/2/3/4/5/9)");devam=getch();
 if(devam=='9') break;
 if(devam=='1') ekleme();
 if(devam=='2') guncel();
 if(devam=='3') silme();
 if(devam=='4') arama();
 if(devam=='5') liste();
 }
printf("\nprg bitti");getch();}
