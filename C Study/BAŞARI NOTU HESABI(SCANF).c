#include<stdio.h>
#include<conio.h>
main(){ char ad[10],sad[10];
int vize,final;
float bn;
printf("ad giriniz:");scanf("%s",ad);
printf("soyad giriniz:");scanf("%s",sad);
printf("vize notunu giriniz:");scanf("%d",&vize);
printf("final notunu giriniz:");scanf("%d",&final);
bn=vize*0.3+final*0.7;
printf("isim:%s %s",ad,sad);
printf("\nvize notu:%d\nfinal notu:%d",vize,final);
printf("\nbasari notu:%.2f\n",bn);
return main();
getch();
}
