#include<stdio.h>
int main(){
	int sayi,i;
	printf("lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	for(i<0;i<=sayi;i+=2){
		printf("%d",i);
	}
	return 0;
}
