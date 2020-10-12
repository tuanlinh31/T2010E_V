#include <stdio.h>
#include <conio.h>

int main () {
	int i,n;
	float tongphanso = 0,t;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) {
		t = (float)1/i;
		tongphanso = tongphanso +t;
		

	}
	printf("tong phan so cua %d la: %f",n,tongphanso);
}
