#include<stdio.h>
#include<conio.h>
main(){char ad[3][10]={"can","fatma","ali"};
char sad[3][10]={"ak","pak","bak"};
int yas[3]={10,55,85},k,ayas;
printf("aranilan yas");scanf("%d",&ayas);
for(k=0;k<3;k++){
	if(yas[k]>=ayas)
printf("\n%10s%10s%3d",ad[k],sad[k],yas[k]);
}
getch();
}
