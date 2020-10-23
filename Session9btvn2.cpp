  
#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap so luong chuoi n: ");
	scanf("%d",&n);
	char ars[n][20];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi %d: ",i);
		scanf("%s",ars[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(ars[j],ars[j+1]) >0){
				char tmp[20];
				strcpy(tmp,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],tmp);
			}
		}
	}	
	//
	printf("Nhung chuoi vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}
}
