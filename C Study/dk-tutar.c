#include<stdio.h>
#include<conio.h>
 main(){int dk; 
 float ode1=0.600,ode2=0.450,ode3=0.300,ode4=0.250;
 printf("dk:");scanf("%d",&dk);
 if((dk>0)&&(dk<=60))printf("odenecek tutar:%f",ode1);
 if((dk>61)&&(dk<=180))printf("odenecek tutar:%f",ode2);
 if((dk>181)&&(dk<=500))printf("odenecek tutar:%f",ode3);
 if(dk>500)printf("odenecek tutar:%f",ode4);
 getch();}


