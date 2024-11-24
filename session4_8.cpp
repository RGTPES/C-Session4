#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh cua tam giac");
	scanf("%d",&a);
	printf("nhap canh cua tam giac");
	scanf("%d",&b);
	printf("nhap canh cua tam giac");
	scanf("%d",&c);
	if(a + b > c&& a + c>b&& b+c>a){
		printf("day la 3 canh cua 1 tam giac");
	}else{
		printf("day ko phai la 3 canh cua 1 tam giac");
	}
}
