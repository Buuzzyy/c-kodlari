#include<stdio.h>
int main(){
	int x,y,alan,cevre;
	
	printf ("lutfen x degerini giriniz:");
	scanf ("%d",&x);
	
	printf ("lutfen y degerini giriniz:");
	scanf ("%d",&y);
	
	alan=x*y;
	printf ("alaný %d dir\n",alan);
	cevre=2*(x+y);
	printf ("cevresi %d dir",cevre);
	
	
	return 0;
}
