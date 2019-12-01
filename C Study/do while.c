#include<stdio.h>
#include<conio.h>
 main(){ int i=0,y,yt,yort;
 do
 {
 printf("yas gir:");scanf("%d",&y);
 if(y<0)break;
 i++;yt=yt+y;
 }while(1);
 if(i>0){yort=yt/i;
 printf("kisi sayisi:%d",i);
 printf("toplam:%d",yt);
 printf("ortalama:%d",yort);
 }else printf("veri girilmedi");
 getch();}


