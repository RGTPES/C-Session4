#include<stdio.h>
int main(){
	int Bmonth,Emonth,consume;
	printf("nhap so dien su dung luc dau thang\n");
	scanf("%d",&Bmonth);
	printf("nhap so dien su dung luc cuoi thang\n");
	scanf("%d",&Emonth);
	consume = Emonth - Bmonth;
	if (consume >= 0 && consume < 50){
		consume *= 10000;
		
	}else if(consume <100){
		consume = 50000 + (consume-50)*15000;
	}else if(consume<150){
		consume = 50000 + 75000 + (consume -100)*20000;
	}else if(consume<200){
		consume = 500000 + 750000 + 1000000 + (consume - 150)*25000;;
	}else{
		consume = 500000 + 750000 + 1000000 + 1250000 + (consume - 200)*30000;;	
	}
	
	printf("%d",consume);
}
