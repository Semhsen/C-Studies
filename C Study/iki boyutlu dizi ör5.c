#include<stdio.h>
#include<conio.h>
main(){char ad[3][10],sad[3][10];
int yas[3],k,ayas;
for(k=0;k<3;k++){
printf("%d.ad",k+1);scanf("%s",ad[k]);
printf("%d.soyad",k+1);scanf("%s",sad[k]);
printf("%d.yas",k+1);scanf("%d",&yas[k]);}
printf("aranilan yas");scanf("%d",&ayas);
for(k=0;k<3;k++){
	if(yas[k]>=ayas){
printf("\n%10s%10s%3d",ad[k],sad[k],yas[k]);}
}
getch();
}
