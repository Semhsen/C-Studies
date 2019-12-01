#include<stdio.h>
#include<conio.h>
main(){int satis[3][2]={{10,20},{1,2},{3,2}};
int i,j,tp;
for(i=0;i<3;i++){
	tp=0;
for(j=0;j<2;j++){
printf("%4d",satis[i][j]);
tp=tp+satis[i][j];}
printf(" toplam=%4d\n",tp);}

getch();
}
