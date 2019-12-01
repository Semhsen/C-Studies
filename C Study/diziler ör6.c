#include<stdio.h>
#include<conio.h>
main(){ int k,fin[5],fn;
//sayýlar hafýzaya alýnýyor
  for(k=0;k<5;k++){
  	printf("x[%d]=",k);scanf("%d",&fin[k]);
  }
  printf("girilen not:");scanf("%d",&fn);
//hafýzada bulunanlar ekrana yazýlýyor
  for(k=0;k<5;k++){
  	if(fin[k]>fn)
  printf("\nyas[%d]=%d",k,fin[k]);
  }
  getch();
	
	 }
