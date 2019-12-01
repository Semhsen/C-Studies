#include<stdio.h>
#include<conio.h>
main(){ int k,yas[4];
//sayýlar hafýzaya alýnýyor
  for(k=0;k<4;k++){
  	printf("x[%d]=",k);scanf("%d",&yas[k]);
  }
//hafýzada bulunanlar ekrana yazýlýyor
  for(k=3;k>=0;k--){
  printf("\nyas[%d]=%d",k,yas[k]);
  }
  getch();
	
	 }
