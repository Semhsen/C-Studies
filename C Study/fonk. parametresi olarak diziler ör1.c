#include<stdio.h>
#include<conio.h>
float toplam(float s[5]){
	float tp1=0;
	int k;
for(k=0;k<5;k++){tp1=tp1+s[k];
}
return tp1;
}
main(){float sa[5],tp;
int k;
for(k=0;k<5;k++){
	printf("bir sayi gir:");scanf("%f",&sa[k]);
}
tp=toplam(sa);
printf("\ntoplam:%f",tp);
getch();
}
