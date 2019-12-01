#include<stdio.h>
#include<conio.h>
main(){ int vize,final; float bn;
printf("vize notunu giriniz:");scanf("%d",&vize);
printf("final notunu giriniz:");scanf("%d",&final);
bn=vize*0.3+final*0.7;
if(bn>=59.50)printf("%f:gecti",bn);
else printf("%f:kaldi",bn);
getch();
}
