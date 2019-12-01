#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){char k1[10];
printf("isim giriniz:");scanf("%s",k1);
if((strcmp("ali",k1)==0) || (strcmp("ayþe",k1)==0))printf("merhaba %s",k1);
else printf("gule gule %s",k1);
getch();
}
