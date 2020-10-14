#include <stdio.h>
int main() {
	int a,b;
	printf("nhap vao so a: ");
	scanf("%d",&a);
	printf("nhap vao so b: ");
	scanf("%d",&b);
	if(a<b) {
		for (int i = b;;i++) {
			if(i%a==0){
				printf("boi chung lon nhat la: %d",i);
				break;
			}
		} 
	}
	else {
		for(int j = a;;j++) {
			if(j%b==0) {
				printf("boi chung lon nhat la: %d",j);
				break;
				}
			}
		}
}
