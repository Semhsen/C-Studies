#include<stdio.h>
#include<conio.h>
main(){
FILE*fg;
int sayi;
char devam;
fg=fopen("s.dat","w");
if(fg==NULL)
{
printf("dosya acilamiyor");
exit(1);
}
devam='e';
while(devam!='h')
{printf("\nsayi gir:");scanf("%d",&sayi);
printf("\nsayi=%d",sayi);
if(fwrite(&sayi,sizeof(sayi),1,fg)!=1)
{printf("\nkayit hatasi");
exit(1);
}
printf("devammi(e/h)");
devam=getch();
}
fclose(fg);
printf("\nbitti");
getch();}
