#include<stdio.h>
int main(){
	int a;
	printf("nhap so nguyen de ktra xem co chia het cho 3 va 5 ko\n");
	scanf("%d",&a);
	if(a % 3==0 && a % 5==0){
			printf("%d chia het cho ca 3 va 5",a);
	}else if(a % 3==0){
		printf("%d chia het cho 3",a);
	}else if(a % 5==0){
		printf("%d chia het cho 5",a);
	}else{
		printf("%d ko chia het cho 5 va 3",a);
	}
	

	
}
