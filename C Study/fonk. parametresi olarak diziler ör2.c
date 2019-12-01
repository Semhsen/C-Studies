#include<stdio.h>
#include<conio.h>
#include "uzunluk.c"
main(){char kel[100];
int uzun;
	printf("kelime gir:");scanf("%s",kel);
uzun=uzunluk(kel);
printf("\nuzuluk:%d",uzun);
getch();
}
