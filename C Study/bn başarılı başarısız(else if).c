#include<stdio.h>
#include<conio.h>
main(){ int vize,final; float bn;
printf("vize notu:");scanf("%d",&vize);
printf("final notu:");scanf("%d",&final);
bn=vize*0.3+final*0.7;
if(bn>=59.50)printf("basari notu:%.2f basarili\n",bn);
else{if(bn<59.50)printf("basari notu:%.2f basrisiz\n",bn);
}return main();
getch();
}n
