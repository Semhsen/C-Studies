#include<stdio.h>
#include<conio.h>
main(){ int k,kg[5],tp=0,ort;
//say�lar haf�zaya al�n�yor
  for(k=0;k<5;k++){
  printf("x[%d]=",k);scanf("%d",&kg[k]);
  tp=tp+kg[k];}
//haf�zada bulunanlar ekrana yaz�l�yor
  for(k=0;k<5;k++){
  printf("\nyas[%d]=%d",k,kg[k]);
  }
  printf("\ntoplam:%d",tp);
  ort=tp/k;
  printf("\nortalama:%d",ort);
  getch();
	 }
