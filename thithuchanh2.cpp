#include <stdio.h>
float avg (int s[],int n){
	int tong = 0;
	float tbc;
	for (int i = 0; i<n;i++){
		tong += s[i];

	}
	tbc = (float)(tong/n);
	return tbc;
}


int main() {
	int n;
	printf("nhap vao mang so nguyen: ");
	scanf("%d",&n);
	int s[n];
	for(int i=0; i<n;i++){
		printf("s[%d] = ",i);
		scanf("%d",&s[i]);
	}
	float x ;
	x = avg(s[n],n);
	printf("%f",x);
}