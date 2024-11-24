#include<stdio.h>
int main(){
	int Bmonth,Emonth,consume,sum,money;
	printf("nhap so dien su dung luc dau thang\n");
	scanf("%d",&Bmonth);
	printf("nhap so dien su dung luc cuoi thang\n");
	scanf("%d",&Emonth);
	consume = Emonth - Bmonth;
	if (consume >= 0 && consume < 50){
		money = 10000;
		
	}else if(consume <100){
		money = 15000;
	}else if(consume<150){
		money = 20000;
	}else if(consume<200){
		money = 25000;
	}else{
		money = 30000;	
	}
	sum =consume * money;
	printf("%d",sum);
}
