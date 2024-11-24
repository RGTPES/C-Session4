#include<stdio.h>
int main(){
	int a;
	printf("nhap so nguyen de kiem tra \n");
	scanf("%d",&a);
	if (a>0){
		printf("%d la so duong",a);
	} else {
		printf("%d la so am",a);
	}
}
