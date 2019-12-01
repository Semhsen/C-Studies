#include<stdio.h>
#include<conio.h>
main(){int a,*p,k;
a=3;
p=&a;
printf("\na=%d p=%p",a,p);
*p=25;
printf("\na=%d p=%p",a,p);
getch();
}
