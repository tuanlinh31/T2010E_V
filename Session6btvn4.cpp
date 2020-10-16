#include <stdio.h>
int main() {
	int n;
	printf("nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++) {
		printf("nhap phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int tong = 0;
	int tong2 = 0;
	for(int i = 0;i<n;i++){
		if(arr[i]>0) {
			tong+=arr[i];
			if(i==(n-1)){
				if(tong>tong2){
					tong2=tong;
				}
			}
		}
		if(arr[i]<1){
			if(tong>tong2){
				tong2 = tong;
				tong = 0;
			}
		}
	}
	printf("tong lon nhat: %d",tong2);
}
