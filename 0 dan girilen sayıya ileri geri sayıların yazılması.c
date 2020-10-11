#include<stdio.h>
int main(){
	int sayi,i;
	printf("lutfen sayiyi giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<=sayi;i++){
		printf("girilen sayi %d\n",i);
	}
	printf("***************************\n");
	for(i=sayi;i>=0;i--){
	
		printf("girilen sayi %d\n",i);
	}
	return 0;
}
