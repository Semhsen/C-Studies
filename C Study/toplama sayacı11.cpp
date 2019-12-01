#include<stdio.h>
#include<conio.h>

 main(){ int i=1,s; float tp=0;
 while(i<=5)
 {printf("%d . sayiyi giriniz:",i);scanf("%d",&s);
 if(s%2==0)
 tp=tp+s;
 i++;
 }printf("toplam:%f",tp);
 getch();}


