#include<stdio.h>
int main(){
	int years;
	printf("nhap nam can kiem tra\n");
	scanf("%d",&years);
	if(years % 4==0&& years %100 !=0|| years % 400==0){
		printf("%d la nam nhuan",years);
	}else{
		printf("%d ko phai nam nhuan",years);
	}
}
