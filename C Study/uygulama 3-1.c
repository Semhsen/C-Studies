#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){char ad[10];int kg,at=0,ot=0,k=0,d=0,a=0;
while(1){printf("isim:");scanf("%s",ad);
if(strcmp(ad,"son")==0)break;
printf("agirlik:");scanf("%d",&kg);
if(kg<0)break;k++;
if (strcmp(ad,"ali")==0){at=at+kg;a=a+1;}
if (strcmp(ad,"defne")==0)d=d+1;
}
if(k>0){printf("\nkisi sayisi:%d",k);
printf("\ndefne sayisi:%d",d);
if(a>0){ot=at/a;
printf("\nali sy:%d ort:%d",a,ot);}
else printf("\nali ismi girilmedi");
}else printf("veri girilmedi");
getch();
}
