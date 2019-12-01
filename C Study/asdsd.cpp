#include<stdio.h>
#include<conio.h>
main(){int i,x,y,z;
int *p[3];
x=200;
y=300;
z=7;
p[0]=&x;
p[1]=&y;
p[2]=&z;
for(i=0;i<3;i++){
	printf("\n%p adresindeki deger=%d",p[i],*p[i]);
}
getch();
}
