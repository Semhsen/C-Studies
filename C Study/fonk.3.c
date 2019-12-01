#include<stdio.h>
#include<conio.h>
int carp(int a,int b)
{int cp;cp=a*b;
return(cp);
}
main(){int x,y,carpim;
printf("1. sayi");scanf("%d",&x);
printf("2. sayi");scanf("%d",&y);
carpim=carp(x,y);
printf("carpim:%d",carpim);getch();
}
