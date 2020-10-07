#include <stdio.h>
int main (){
	int a;
	printf("Nhap gia tri ngay: ");
	scanf("%d",&a);
	int b;
	printf("Nhap gia tri thang: ");
	scanf("%d",&b);
	int c;
	int l;
	if(b<=12){
		if(b>=1){
			if(b=1){
				c = a;
			} if(b=2){
				c = 31 + a;
			} if(b=3){
				c = 31 + 28 + a;
			} if(b=4){
				c = 31*2 +28 +a;
			} if(b=5){
				c = 31*2 +28 +30 +a;
			} if(b=6){
				c = 31*3 +28 +30 +a;
			} if(b=7){
				c = 31*3 +28 +30*2 +a;
			} if(b=8){
				c = 31*4 +28 +30*2 +a;
			} if(b=9){
				c = 31*5 +28 +30*2 +a;
			} if(b=10){
				c = 31*5 +28 +30*3 +a;
			} if(b=11){
				c = 31*6 +28 +30*3 +a;
			} else{
				c = 31*6 +28 +30*4 +a;
			} 
			l = c % 7;
			if(l=1){
				printf("Thu 2");
			}if(l=2){
				printf("Thu 3");
			}if(l=3){
				printf("Thu 4");
			}if(l=4){
				printf("Thu 5");
			}if(l=5){
				printf("Thu 6");
			}if(l=6){
				printf("Thu 7");
			}else {
				printf("Chu Nhat");
			}
		}else{
			printf("Thang khong ton tai");
		}
		
	}else {
		printf("Thang khong ton tai");
	}
}
