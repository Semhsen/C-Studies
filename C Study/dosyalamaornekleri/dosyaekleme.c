#include <stdio.h>
#include <conio.h>
main(){FILE *fg;
int sayi;
char devam='e';
 fg=fopen("s.dat","a");
if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
  while(devam!='h'){
  printf("\nsayi gir");scanf("%d",&sayi);
    if(fwrite(&sayi,sizeof(sayi),1,fg)!=1) {
    printf("\nkayit hatasi");exit(1);} 
  printf("\ndevam edilsinmi (e/h)");devam=getch();  
  }
fclose(fg);printf("\nbitti");
getch();}
