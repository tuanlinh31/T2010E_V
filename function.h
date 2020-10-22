#include <stdio.h>
int sum(int a,int b){
	int c = a + b;
	return c;
}
int cnt(int a){
	if(a<2) return 1;
	int count = 0;
	for(int i = 1;i<=a;i++){
		int c = a%i;
		if(c == 0){
			count++;
		}
	}
	return count;
}
bool KiemTraSNT(int n){
	if (n<2) return false;
	if(n<=3)return true;
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			return false;
		}
	}
}
void Hello(){
	printf("Hello world");
	return;
}
