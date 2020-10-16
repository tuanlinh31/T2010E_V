#include <stdio.h>
int main() {
	int n;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0;i<n;i++){
		printf("nhap vao arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int solecuoicung =arr[0];
	for (int i =0;i<n;i++) {
		if(arr[i]%2 !=0) {
			solecuoicung = arr[i];
		}
	}
	printf("so le cuoi cung cua mang: %d",solecuoicung);
}
