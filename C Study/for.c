#include<stdio.h>
#include<conio.h>
 main(){ int i,y,yt,yort;
 for(i=0;i<10000;i++)
 {
 printf("yas gir:");scanf("%d",&y);
 if(y<0)break;
 yt=yt+y;
 }
 if(i>0){yort=yt/i;
 printf("kisi sayisi:%d",i);
 printf("toplam:%d",yt);
 printf("ortalama:%d",yort);
 }else printf("veri girilmedi");
 getch();}



