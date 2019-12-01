#include<stdio.h>
#include<conio.h>
main(){ int i=0,ara,fin,bn,at=0,ft=0,bt=0,ao,fo,bo;
while(1)
{printf("arasinav:");scanf("%d",&ara);
printf("final:");scanf("%d",&fin);
if((ara<0)||(fin<0))break;
i++;
bn=ara*0.3+fin*0.7;
printf("basari:%d",bn);
at=at+ara;ft=ft+fin;bt=bt+bn;
}
if(i>0){bo=bt/i;fo=ft/i;ao=at/i;
printf("\n kisi sayisi:%d",i);
printf("\nat:%d ft:%d bt:%d",at,ft,bt);
printf("\nao:%d fo:%d bo:%f",ao,fo,bo);
}
else printf("\n veri girilmedi");
getch();
}
