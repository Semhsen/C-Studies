#include<stdio.h>
#include<conio.h>
main(){ int k,fin[5],fn;
//say�lar haf�zaya al�n�yor
  for(k=0;k<5;k++){
  	printf("x[%d]=",k);scanf("%d",&fin[k]);
  }
  printf("girilen not:");scanf("%d",&fn);
//haf�zada bulunanlar ekrana yaz�l�yor
  for(k=0;k<5;k++){
  	if(fin[k]>fn)
  printf("\nyas[%d]=%d",k,fin[k]);
  }
  getch();
	
	 }
