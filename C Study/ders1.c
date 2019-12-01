#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){char k1[10],k2[10];
printf("kelime giriniz:");scanf("%s",k1);
printf("kelime giriniz:");scanf("%s",k2);
if(strcmp(k1,k2)==0)printf("AYNI");
else printf("FARKLI");
getch();
}
