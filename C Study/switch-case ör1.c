//ekrandan a,b,c,d harflerinden birini ald���nda ""... harfi se�ildi"" mesaj�n� yazan,di�er se�imlerde "yanl�� se�im" mesaj�n� yazan program�n switch/case deyimi ile yaz�m�//
#include<stdio.h>
#include<conio.h>
 main(){ char sec;
 printf("seciminiz(a/b/c/d):\n");sec=getch();
 switch(sec)
 {
 	case 'a':printf("a harfi secildi");break;
 	case 'b':printf("b harfi secildi");break;
 	case 'c':printf("c harfi secildi");break;
 	case 'd':printf("d harfi secildi");break;
    default:printf("yanlis secim"); 
 }
 getch();}

