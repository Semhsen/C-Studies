#include<stdio.h>
#include<conio.h>
int dyili(int yas)
{int dy;dy=2016-yas;
return(dy);
}
main(){int ya,dy;
printf("yas=");scanf("%d",&ya);
printf("\nyas=%d",ya);
dy=dyili(ya);
printf("\ndogum yili:%d",dy);getch();
}
