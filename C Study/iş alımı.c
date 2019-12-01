#include<stdio.h>
#include<conio.h>
main(){int cins,yas,bolum,ask; float istec;
printf("1=bay 0=bayan");scanf("%d",&cins);
if(cins==1)
{printf("1=askerlik yapti 0=yapmadi");scanf("%d",&ask);}
printf("1=mak. müh 2=mek. müh 3=diger");scanf("%d",&bolum);
printf("is tecrübesi");scanf("%f",&istec);
if((bolum==1)||(bolum==2))
{if (cins==1){if((yas<30)&&(ask==1))
printf("uygundur");else printf("uygun degil");
}
else{if ((yas<30)&&(istec>=3)) printf("uygundur");else printf("uygun degil");

}
}
else printf("uygun degil");
getch();
}
