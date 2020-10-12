#include <stdio.h>
#include <conio.h>
int main(){
	int i;
	int n;
	int sum =0;
	n=200;
	for(i=1;i<n;i++) {
		
		if(i%2 !=0){
			sum += i;
		}

	}
	printf("tong 100 so le dau tien: %d",sum);
}
