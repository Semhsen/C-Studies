#include<stdio.h>
#include<conio.h>
float toplam(int sa)
 {temizle();
  int dn=0,k;
 for(k=1;k<=sa;k++){
 	dn=dn+k;
 }
 return(dn);

 }
 float carpim(int sa)
 {temizle();
  int k;
  float cp=1;
 for(k=1;k<=sa;k++){
 	cp=cp*k;
 }
 return(cp);

 }
 float ortalama(int sa)
 {temizle();
  int rt=0,k;
 for(k=1;k<=sa;k++){
 	rt=rt+k;
 }
 rt=rt/k;
 return(rt);
 }
 temizle(){
 	int k;
 	for(k=1;k<=24;k++)
 	printf("\n");
 	return;
 }

 main(){ 
 float toplam(int sa);float carpim(int sa);float ortalama(int sa),sonuc;
 int sayi;char a;
 printf("sinir olan sayiyi gir:");scanf("%d",&sayi);
  while(1);
 {
printf("\nANA MENU\n");
printf("1.Bir ile ekrandan girilen sayilar arasindaki sayilarin toplami\n");
printf("2.Bir ile ekrandan girilen sayilar arasindaki sayilarin carpimi\n");
printf("3.Bir ile ekrandan girilen sayilar arasindaki sayilarin ortalamasi\n");
printf("4.CIKIS\n"); printf("SECÝMÝNÝZ");
a=getch();
if(a=='4')break;
switch(a) {
 	case '1':sonuc=toplam(sayi);printf("\ntoplam=%f",sonuc);break;
 	case '2':sonuc=carpim(sayi);printf("\ncarpim=%f",sonuc);break;
 	case '3':sonuc=ortalama(sayi);printf("\nortalama=%f",sonuc);break;
    default:printf("\nyanlis secim"); 
 }
}
 getch();}
 
