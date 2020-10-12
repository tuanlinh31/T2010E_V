#include <stdio.h>
#include<conio.h>
int main() {
	
int n, giaithua=1,i;
printf("Nhap vao so n: ");
scanf("%d",&n);

for(i=1;i<=n;i++) {
	giaithua = giaithua*i;
	
}
printf("giai thua cua %d la: %d",n,giaithua);
}

