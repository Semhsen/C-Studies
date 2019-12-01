#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){float hr,in,ind,sf;
printf("harcama tutari=");scanf("%f",&hr);
if((0<hr)&&(hr<=250))in=10;
if((251<hr)&&(hr<=500))in=15;
if((501<hr)&&(hr<=1000))in=20;
if((1000<hr))in=25;
ind=hr*in/100;
sf=hr-ind;
printf("son fiyat: %f",sf);
getch();
}
