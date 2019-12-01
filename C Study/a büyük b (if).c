#include<stdio.h>
#include<conio.h>
main(){ float ilksayi,ikincisayi;
printf("ilk sayiyi giriniz:");scanf("%f",&ilksayi);
printf("ikinci sayiyi giriniz:");scanf("%f",&ikincisayi);
if(ilksayi>ikincisayi)printf("%.1f buyuk\n",ilksayi);
if(ikincisayi>ilksayi)printf("%.1f buyuk\n",ikincisayi);
if(ilksayi==ikincisayi)printf("%.1f=%.1f\n",ilksayi,ikincisayi);
return main();
getch();
}
