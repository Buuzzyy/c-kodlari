#include <stdio.h>
#define oran 3.14
int main(){
	float x,alan,cevre;
	x_oku:
		printf ("lutfen x degerini giriniz:");
		scanf("%f",&x);
		
		if (x<=0){
	
		goto x_oku;
			}
		
	    alan=oran*x*x;
	    printf("dairenin alani =%f dir\n",alan);
	    cevre =oran*2*x;
	   printf ("dairenin cevresi = %f dir",cevre);
	   return 0;
	    
	
	    }
