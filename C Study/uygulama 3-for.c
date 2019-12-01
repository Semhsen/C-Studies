#include<stdio.h>
#include<conio.h>
main(){int i,ara,fin,bn,at=0,ft=0,bt=0,ao,fo,bo;
for(i=0;i<10000;i++){
	printf("ara=");scanf("%d",&ara);
    printf("final=");scanf("%d",&fin);
    if((ara<0)||(fin<0))break;
    bn=ara*0.3+fin*0.7;
    printf("basri=%d",bn);
    at=at+ara;ft=ft+fin;bt=bt+bn;
}
if(i>0){
ao=at/i;fo=ft/i;bo=bt/i;
printf("ara ortalama=%d\nfinal ortalama=%d\nbasari ortalama=%d",ao,fo,bo);}
else printf("\nveri girilmedi");
getch();
}
