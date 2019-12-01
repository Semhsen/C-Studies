#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {char sicil[5];char ad[10];char soyad[10];int yas;
	int brut;} PERSONEL;
char cev;
FILE *fg,*fg1;
PERSONEL p1;

sicilarama(){system("cls");char asicil[5]; int bul=0;
 printf("aranansicil no");scanf("%s",asicil);
 fg=fopen("personel.dat","r");
 if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
 fread(&p1,sizeof(p1),1,fg);
 while((feof(fg))==0){
     if(strcmp(p1.sicil,asicil)==0){
      printf("\nsicil: %5s ad:%10s soyad:%10s yas:%4d burut: %5d"
      ,p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut); bul=1; }
 fread(&p1,sizeof(p1),1,fg);
 }
fclose(fg);
if (bul==0) printf("\n aranan kayit bulunamadi");
printf("\narama  bitis");getch();return;}

silme(){system("cls");char asicil[5];
 printf("silinecek sicil no");scanf("%s",asicil);
 fg=fopen("personel.dat","r");
 if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
 fg1=fopen("gec.dat","w");
 if(fg1==NULL) {printf("dosya acilamiyor");exit(1);}
 fread(&p1,sizeof(p1),1,fg);
 while((feof(fg))==0){
     cev='h';
     if(strcmp(p1.sicil,asicil)==0){
      printf("\nsicil: %5s ad:%10s soyad:%10s yas:%4d burut: %5d"
      ,p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut); 
      printf("\nsilinsin mi(e/h)");cev=getch();
     }
   if(cev!='e'){  
    if(fwrite(&p1,sizeof(p1),1,fg1)!=1) {printf("\nkayit hatasi");exit(1);} 
   }
 fread(&p1,sizeof(p1),1,fg);
 }
fclose(fg);fclose(fg1);
remove("personel.dat");
rename("gec.dat","personel.dat");
printf("\nsilme  bitis");getch();return;}


guncel(){system("cls");char asicil[5];
 printf("guncelleme yapilacakj sicil no");scanf("%s",asicil);
 fg=fopen("personel.dat","r");
 if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
 fg1=fopen("gec.dat","w");
 if(fg1==NULL) {printf("dosya acilamiyor");exit(1);}
 fread(&p1,sizeof(p1),1,fg);
 while((feof(fg))==0){
     if(strcmp(p1.sicil,asicil)==0){
      printf("\nsicil: %5s ad:%10s soyad:%10s yas:%4d burut: %5d"
      ,p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut); 
      printf("\nsicil no");scanf("%s",p1.sicil);
      printf("\nad");scanf("%s",p1.ad);
      printf("\nsoyad");scanf("%s",p1.soyad);           
      printf("\nyas");scanf("%d",&p1.yas);
      printf("\nburut");scanf("%d",&p1.brut);
      }
   if(fwrite(&p1,sizeof(p1),1,fg1)!=1) {printf("\nkayit hatasi");exit(1);} 
 fread(&p1,sizeof(p1),1,fg);
 }
fclose(fg);fclose(fg1);
remove("personel.dat");
rename("gec.dat","personel.dat");
printf("\ngunceleme  bitis");getch();return;}

liste(){system("cls");
 fg=fopen("personel.dat","r");
 if(fg==NULL) {printf("dosya acilamiyor");exit(1);} 
 fread(&p1,sizeof(p1),1,fg);
 while((feof(fg))==0){
    printf("\nsicil: %5s ad:%10s soyad:%10s yas:%4d burut: %5d"
      ,p1.sicil,p1.ad,p1.soyad,p1.yas,p1.brut);                 
 fread(&p1,sizeof(p1),1,fg);
 }
fclose(fg);
printf("\n listeleme bitis");getch();return;}

ekleme(){system("cls");
 fg=fopen("personel.dat","a");
 if(fg==NULL) {printf("dosya acilamiyor");exit(1);} 
  while(1){
  printf("\nsicil no");scanf("%s",p1.sicil);
  printf("\nad");scanf("%s",p1.ad);
  printf("\nsoyad");scanf("%s",p1.soyad);           
  printf("\nyas");scanf("%d",&p1.yas);
  printf("\nburut");scanf("%d",&p1.brut);
  if(fwrite(&p1,sizeof(p1),1,fg)!=1) {printf("\nkayit hatasi");exit(1);} 
  printf("devam mi(e/h)");cev=getch();
   if (cev=='h') break;
  }
fclose(fg);
printf("\n ekleme bitis");getch();return;}

main(){
   while(1){
   system("cls");
   printf("\n1-ekleme");             
   printf("\n2-guncelleme");
   printf("\n3-silme");             
   printf("\n4-sicil no");
   printf("\n5-listeleme"); 
   printf("\n9-CIKIS");
   printf("\n seciminiz (1/2/3/4/5/9)");cev=getch();
   if (cev=='9') break;            
   if (cev=='1') ekleme();
   if (cev=='5') liste();
   if (cev=='2') guncel();
   if (cev=='3') silme();
   if (cev=='4') sicilarama();
   }
printf("\nprg bitti");getch();}
