#include <stdio.h>
int main() {
	int a,b;
	printf("nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	if(a>b) {
		for(int i = b;i>=1;i--) {
			if(a%i==0){
				printf("%d",i);
				break;
			}
		}
	} else {
		for(int j = a;j>=1;j--) {
			if(b%j==0){
				printf("%d",j);
				break;
			}
		}
	}
}
