#include <stdio.h>
int main(){
	int a;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	int b;
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	if (a>=b){
		
		printf("%f",a/b);
	}else {
		
		printf("%d",a*b);
	}
}
