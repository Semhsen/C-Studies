#include<stdio.h>
#include<conio.h>
main(){int k,s=0;
char kel[100];
printf("kelime gir:");scanf("%s",kel);
 for(k=0;kel[k]!='\0';k++)
 {if(kel[k]=='a')
 s++;
 printf("%c\n",kel[k]);
 }
 printf("\na sayisi:%d\n",s);
  getch();
	 }
