#include<stdio.h>
#include<conio.h>
main(){ float bm,t,ky,sk,gv,nm;
printf("burut maas gir:");scanf("%f",&bm);
t=bm*0.15;
ky=500;
sk=bm*0.12;
gv=(t+ky-sk)*0.3;
nm=bm+t+ky-sk-gv;
printf("tazminat:%f",t);
printf("\nkonut yardmý:%f",ky);
printf("\nsigorta kesintisi:%f",sk);
printf("\ngelir vergisi:%f",gv);
printf("\nnet maas:%f",nm);
getch();
}
