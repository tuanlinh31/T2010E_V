#include <stdio.h>
int main(){
	int n;
	printf("nhap vao mang co n so nguyen: ");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int count =0;
	int temp;
	for(int i = 0;i<n;i++){
		
		if(arr[i] %2 ==0){
			temp = arr[i];
			count++;
		}
	}
	if(count == 0){
		printf("no EVEN number");
	}
	printf("%d",temp);
}
