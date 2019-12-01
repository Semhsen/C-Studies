#include<stdio.h>
#include<conio.h>
main(){int satis[3][2]={{10,20},{1,2},{3,2}};
int i,j,tp;
for(j=0;j<2;j++){
	tp=0;
for(i=0;i<3;i++){
printf("%5d",satis[i][j]);
tp=tp+satis[i][j];}
printf(" toplam=%5d\n",tp);}

getch();
}
