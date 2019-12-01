#include<stdio.h>
#include<conio.h>
main(){int k,s=0;
char kel[100],ad[100];

printf("kelime gir:");scanf("%s",kel);
 printf("aranan harfi gir:");scanf("%c",ad);
 for(k=0;kel[k]!='\0';k++)
 {
 if(kel[k]==ad){
 s++;
 printf("%c\n",kel[k]);}
 }
 printf("\naranan sayisi:%d\n",s);
  getch();
	 }
