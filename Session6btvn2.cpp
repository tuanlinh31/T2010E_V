#include <stdio.h>
int main () {
	int n;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++) {
		printf("nhap vao arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int minp = arr[0];
	for(int i =0;i<n;i++){
		if(arr[i] < minp && arr[i]>0) {
			minp = arr[i];
		}
	}
	printf("minp la: %d",minp);
}
