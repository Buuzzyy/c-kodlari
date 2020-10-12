#include <stdio.h>
int main(){
	int x,y,alan,cevre;
	x_oku:
	printf ("lutfen x degerini giriniz:");
	scanf("%d",&x);
	if(x<=0)
	goto x_oku;
	
	y_oku:
	printf ("lutfen y degerini giriniz:");
	scanf ("%d",&y);
	if(y<=0)
	goto y_oku;
	
	alan=x*y;
	cevre=2*(x+y);
	printf ("alani=%d\ncevresi=%d",alan,cevre);
	return 0;
}
