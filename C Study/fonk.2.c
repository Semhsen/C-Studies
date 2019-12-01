#include<stdio.h>
#include<conio.h>
float basari(int ara1,int fin1)
{float bn1;
bn1=ara1*0.3+fin1*0.7;
return(bn1);
}
main(){int ara,fin;float bn;
printf("ara=");scanf("%d",&ara);
printf("final=");scanf("%d",&fin);
bn=basari(ara,fin);
printf("\nbasri:%f",bn);getch();
}
