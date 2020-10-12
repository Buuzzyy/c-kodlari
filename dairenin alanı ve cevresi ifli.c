#include <stdio.h>
#define oran 3.14
int main(){
	float r,alan,cevre;
	printf ("hosgeldniz..\n");
	printf("lutfen r degerini giriniz:");
	scanf ("%f",&r);
	
	if (r>0){
		alan =r*r*oran;
		printf ("dairenin alani= %f dir\n",alan);
		cevre =2*oran*r;
		printf ("dairenin cevresi= %f dir",cevre);
			
	}
	else 
	printf ("negatif degerlerin alani ve cevresi alinamiyor");
	return 0;
}
