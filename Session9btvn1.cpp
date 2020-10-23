#include<stdio.h>
#include <string.h>
int main(){
	char arr [20];
	printf("Nhap chuoi: ");
	//scanf("%s",arr);
	fgets(arr,20,stdin);
	int count = 0;
	for (int i = 0;i<strlen(arr);i++) {
		if(arr[i]==97 || arr[i]==101|| arr[i]==105 || arr[i]==111 || arr[i]==117 || arr[i]==121) {
			count++;
		}
		if(arr[i] == 0);
		continue;
	}
	int countpa = strlen(arr) - count;
	printf("so nguyen am co trong chuoi %5s: %d",arr,count);
	printf("\nso phu am co trong chuoi %s: %d\n",arr,countpa);
	//printf("%d",strlen(arr));
}
