#include<stdio.h>
#include<conio.h>
main(){ int vize,final;
float bn;
printf("vize notunu giriniz:");scanf("%d",&vize);
printf("final notunu girirniz:");scanf("%d",&final);
bn=vize*0.3+final*0.7;
if(bn>=59.50){printf("GECTI");printf("\nBASARI NOTU:%.2f\n",bn);
}else{if(bn<60){printf("KALDI");printf("\nBASARI NOTU:%.2f\n",bn);
}
}
return main();
getch();
}
