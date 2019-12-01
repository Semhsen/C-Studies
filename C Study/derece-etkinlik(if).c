#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){int hava;
printf("hava sicakligi giriniz:");scanf("%d",&hava);
if(hava>30)printf("yuzmeye git");
if((hava>20)&&(hava<=30))printf("piknige git");
if((hava>10)&&(hava<=20))printf("tenise git");
if((hava>0)&&(hava<=10))printf("sinemaya git");
if(0>=hava)printf("kayak yapmaya git");
getch();
}
