#include<stdio.h>
#include<conio.h>
main()
{int a,*p,k;
a=5;
p=&a;
printf("\na=%d pointer=%p deger=%d",a,p,*p);
p=p+1;
printf("\na=%d pointer=%p deger=%d",a,p,*p);
p=p-90000000;
printf("\na=%d pointer=%p deger=%d",a,p,*p);
getch();
}
