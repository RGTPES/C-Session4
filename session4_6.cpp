#include<stdio.h>
int main(){
	int Bmonth,Emonth,consume;
	printf("nhap so dien su dung luc dau thang\n");
	scanf("%d",&Bmonth);
	printf("nhap so dien su dung luc cuoi thang\n");
	scanf("%d",&Emonth);
	consume = Emonth - Bmonth;
	if (consume >= 0 && consume < 50){
		printf("so tien dien thag nay la 10000");
		
	}else if(consume <100){
		printf("so tien dien thang nay la 15000");
	}else if(consume<150){
		printf("so tien dien thang nay la 20000");
	}else if(consume<200){
		printf("so tien dien thang nay la 25000");
	}else{
		printf("so tien dien thang nay la 30000");
		
	}
}
