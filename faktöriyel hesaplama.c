#include <stdio.h>
int main(){
	int n,s,f=1 ;
	printf ("lutfen n degerini giriniz:");
	scanf("%d",&n);
	
	for(s=1;s<=n;s++)
	f=f*s;
	printf("faktöriyel %d dir",f);
	return 0;
}
