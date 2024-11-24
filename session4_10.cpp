#include<stdio.h>
int main(){
	int num1,num2,num3,l;
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1<num3 && num2 > num3){//1 3 2
		l = num2;
		num2 = num3;
		num3 =l;
		printf("%d%d%d",num1,num2,num3);
	}else if(num2<num3 && num1 > num3){//2 3 1
		l = num1;
		num1 = num2;
		num2=num3;
		num3 =l;
		printf("%d%d%d",num1,num2,num3);
	}else if(num3<num1 && num1 < num2){//3 1 2
		l = num2;		
		num2 = num1;
		num1=num3;
		num3 =l;
		printf("%d%d%d",num1,num2,num3);
	}else if(num3<num2 && num2< num1){//3 2 1
		l = num1;		
		
		num1=num3;
		num3 =l;
		printf("%d%d%d",num1,num2,num3);
	}else if(num2<num1 && num1< num3){//2 1 3
		l = num1;		
		
		num1=num2;
		num2 =l;
		printf("%d%d%d",num1,num2,num3);
	}else{// 1 2 3
		printf("%d%d%d",num1,num2,num3);
	}
}
