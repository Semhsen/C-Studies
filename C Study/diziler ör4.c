#include<stdio.h>
#include<conio.h>
main(){ int k,yas[4],ya;
//sayýlar hafýzaya alýnýyor
  for(k=0;k<4;k++){
  	printf("x[%d]=",k);scanf("%d",&yas[k]);
  }
  printf("aranilan yas");scanf("%d",&ya);
//hafýzada bulunanlar ekrana yazýlýyor
  for(k=0;k<4;k++){
  	if(yas[k]>=ya)
  printf("\nyas[%d]=%d",k,yas[k]);
  }
  getch();
	 }
