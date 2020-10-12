#include<stdio.h>
int main(){
	int n,i;
	float ort;
	int top=0;
	printf("lutfen bir n degeri giriniz:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	printf("%d\n",i);	
	top=top+i;	
	ort=top/n;
	
	}
	printf("toplam degeri %d\n",top);
	printf("ortalama degeri %f",ort);
}
