#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){char ad[3][10]={"can","fatma","ali"};
char sad[3][10]={"ak","pak","bak"},arad[10];
int i,j,yas[3]={10,55,34};
printf("\naranilan isim:");scanf("%s",arad);
for(i=0;i<3;i++){
	if(strcmp(arad,ad[i])==0){
printf("\n%dinci kayit=",i+1);
printf("\nad=");printf("%s",ad[i]);
printf("\nsoyad=");printf("%s",sad[i]);
printf("\nyas=%d",yas[i]);
printf("\n*************");}
}
printf("\nbitti");
getch();
}
