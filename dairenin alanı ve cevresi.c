#include <stdio.h>
int main(){
	
	double alan,cevre,sayi;
	
	printf ("lutfen bir sayi giriniz:");
	scanf ("%f",&sayi);
	
	alan=3.14*sayi*sayi;
	printf ("dairenin alani %f dir\n",alan);
	
	cevre =3.14*2*sayi;
	printf ("dairenin cevresi %f dir",cevre);
	return 0;
	
}
