#include <stdio.h>
#include <conio.h>
main(){FILE *fg;
int sayi;
 fg=fopen("s.dat","r");
if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
fread(&sayi,sizeof(sayi),1,fg);
  while((feof(fg))==0){
  printf("\nsayi %d",sayi);
  fread(&sayi,sizeof(sayi),1,fg);
  } 

fclose(fg);printf("\nbitti");
getch();}
