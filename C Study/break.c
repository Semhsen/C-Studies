#include<stdio.h>
#include<conio.h>

 main(){ int tp=0,ort,i=0; float za; 
 while(1)
 {
 scanf("%f",&za);
 if(za<0)break;
 i++;
 tp=tp+za;
 ort=tp/i;}
 printf("\n girilen sayilarin adedi:%d",i);
 printf("\n girilen sayilarin toplami:%d\n",tp);
 printf("ortalama:%d",ort);
 getch();}
