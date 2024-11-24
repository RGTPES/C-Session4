#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("nhap number1\n");
	scanf("%d",&number1);
	printf("nhap number2\n");
	scanf("%d",&number2);
	printf("nhap number3\n");
	scanf("%d",&number3);
	if(number3 > number1&& number3 < number2){
		printf("%d nam trong khoang %d va %d",number3,number1,number2);
	}else{
		printf("%d ko nam trong khoang %d va %d",number3,number1,number2);
	}
}
