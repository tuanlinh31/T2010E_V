#include <stdio.h>

int main() {
	int n;
	int sodu=0;
	int i;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	for(i=2;i<=9;i++) {
		if(n%i == 0) {
			sodu++;
		}
			
	}
	if(sodu == 0) {
		printf ("\n %d la so nguyen to",n);
		
	}else {
		printf("\n %d khong la so nguyen to",n);
	}


}

