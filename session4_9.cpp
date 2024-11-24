#include<stdio.h>
int main(){
	int day, month,year;
	
	printf("Nhap ngay\n");
	scanf("%d",&day);
	if(day<1 || day >31){
		printf("khong hop le\n");
		return 0;
	}
	printf("Nhap thang\n");
	scanf("%d",&month);
	if(month <1 || month > 12){
		printf(" ko hop le\n");
		return 0;
	}
	printf("Nhap nam\n");
	scanf("%d",&year);
	if(year< 0 || year>2024){
		printf("khong hop le\n");
		return 0;
	}
		if(year % 4==0&& year %100 !=0|| year % 400==0){
	if( year%400==0 || (year%4==0 && year%100!=0 )){
            if((month==4 || month==6 || month==9 || month==11) && (day<31)){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==2 && day<=29){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else{// khong hop le voi nam nhuan
                printf("ngay %d thang %d nam %d khong hop le\n", day, month, year);
            }
        }else{//nam khong nhuan
            if((month==4 || month==6 || month==9 || month==11) && (day<31)){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==2 && day<=28){//thang 2 nam khong nhuan
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else{// khong hop le voi nam khong nhuan
                printf("ngay %d thang %d nam %d khong hop le\n", day, month, year);
            }
        }
    }else{
        printf("gia tri ban nhap khong hop le\n");
    }
	
	
}
