#include<stdio.h>
#include<conio.h>
main(){ int k,yas[4];
//say�lar haf�zaya al�n�yor
  for(k=0;k<4;k++){
  	printf("x[%d]=",k);scanf("%d",&yas[k]);
  }
//haf�zada bulunanlar ekrana yaz�l�yor
  for(k=0;k<4;k++){
  	if(yas[k]>30)
  printf("\nyas[%d]=%d",k,yas[k]);
  }
  getch();
	
	 }
