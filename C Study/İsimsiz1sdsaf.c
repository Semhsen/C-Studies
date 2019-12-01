#include<stdio.h>
#include<conio.h>
main(){char ad[10];
int vize,final;
float bn;
printf("isim giriniz:");scanf("%s",ad);
printf("vize gir:");scanf("%d",&vize);
printf("final gir:");scanf("%d",&final);
bn=0.3*vize+0.7*final;
printf("isim:%s",ad);
printf("\nvize notu:%d",vize);
printf("\nfinal notu:%d",final);
printf("\nbn:%f",bn);
return main();}
getch();
