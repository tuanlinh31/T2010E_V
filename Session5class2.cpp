#include <stdio.h>
int main() {
	int n;
	do {
		printf("Nhap vao  so nguyen duong: ");
		scanf("%d",&n);
	}while (n<=2);
	int x1=0,x2=1,x3=1;
	for(int i = 3;i<=n;i++) {
		x1 = x2;
		x2 = x3;
		x3 = x1 + x2;
	}
	printf("So thu %d trong day Fibo: %d",n,x3);
}
