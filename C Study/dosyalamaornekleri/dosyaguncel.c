#include <stdio.h>
#include <conio.h>
main(){FILE *fg,*fg1;
int sayi,sayi1;
 fg=fopen("s.dat","r");
if(fg==NULL) {printf("dosya acilamiyor");exit(1);}
 fg1=fopen("gec.dat","w");
if(fg1==NULL) {printf("dosya acilamiyor");exit(1);}
fread(&sayi,sizeof(sayi),1,fg);
  while((feof(fg))==0){
  printf("\nsayi %d",sayi);
  sayi1=sayi*2;
  if(fwrite(&sayi1,sizeof(sayi1),1,fg1)!=1) {
    printf("\nkayit hatasi");exit(1);} 
  fread(&sayi,sizeof(sayi),1,fg);
  }
fclose(fg);fclose(fg1);
remove("s.dat");
rename("gec.dat","s.dat");
printf("\nbitti");getch();}
