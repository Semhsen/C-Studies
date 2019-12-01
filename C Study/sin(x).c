#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){float x,y;
printf("x=");scanf("%f",&x);
y=sin(x);
printf("radyan sin(%f)=%f",x,y);
y=sin((x*3.14159265)/180);
printf("\nderece sin(%f)=%f",x,y);
getch();
}
