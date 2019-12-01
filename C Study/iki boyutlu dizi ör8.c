#include<stdio.h>
#include<conio.h>
main(){int yas[10]={23,67,3,45,33,11,24,89,2,4},eb,k;
eb=yas[0];
for(k=0;k<10;k++){
	if(yas[k]>eb)eb=yas[k];
}
printf("en buyuk yas=%d",eb);
printf("\nbitti");
getch();
}
