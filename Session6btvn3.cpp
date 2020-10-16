#include <stdio.h>
int main() {
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0;i<n;i++) {
		printf("nhap arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int count = 0;
	int count1 =0;
	for (int i = 0;i<n;i++){
		if(arr[i]>0){
			count++;
			if(i==(n-1)){
				if(count>count1){
					count1=count;
				}
			}
		}
		if(arr[i]<1 ){
			if(count>count1){
				count1=count;
				count=0;
			}
		}		
	}
	printf("%d",count1);
}

