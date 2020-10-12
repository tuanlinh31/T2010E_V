#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,s,p,p2;
	printf("Nhap canh a: ");
	scanf("%f",&a);
	
	printf("Nhap canh a: ");
	scanf("%f",&b);
	
	printf("Nhap canh a: ");
	scanf("%f",&c);
	
	if(a+b>c && a+c>b && b+c>a) {
		printf("Day la mot tam giac");
		p = (a+b+c);
		p2 = p/2;
		s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("\nchu vi cua tam giac la: %f",p);
		printf("\n dien tich cua tam giac la: %f",s);
	} else {
		printf("Day khong phai la mot tam giac");
	}
}
