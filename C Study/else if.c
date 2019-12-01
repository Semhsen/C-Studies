#include<stdio.h>
#include<conio.h>
main(){ float ilksayi,ikincisayi;
printf("ilk sayi:");scanf("%f",&ilksayi);
printf("ikinci sayi:");scanf("%f",&ikincisayi);
if(ilksayi==ikincisayi){printf("%f=%f",ilksayi,ikincisayi);
}else{if(ilksayi>ikincisayi)printf("%f,%f",ilksayi,ikincisayi);
else if(ikincisayi>ilksayi)printf("%f,%f",ikincisayi,ilksayi);
}
getch();}
