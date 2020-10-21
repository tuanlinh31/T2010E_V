  
#include <stdio.h>
int main(){
	// nhap so luong phan tu trong mang
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	// Nhap mang va sap xep luon ngay sau khi nhap gia tri
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[] = ");
		scanf("%d",&arr[i]);
		// Sap xep lai luon -> mang co i+1 phan tu (0->i)
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(arr[k]>arr[k+1]){
					int tmp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = tmp;
				}
			}
		}
		// da sap xep xong thu tu be->lon cua danh sach: 0 ->i
	}

	
	// Sau khi nhap xong tat ca, kiem tra ket qua
	printf("Mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	
	int x;
	printf("\n Nhap x = ");
	scanf("%d",&x);
	int l=0,h=n-1,flag=0,sotiemcan;
	while(l<=h){
		int m=(l+h)/2;
		if(x==arr[m]){
			break;
		}else if(x<arr[m]){
			h=m-1;
		}else{
			l=m+1;
		}
		if(l==h){
			if(sotiemcan >arr[m] && sotiemcan != arr[m])  {
				sotiemcan = arr[m];
			}
			if (sotiemcan <arr[m] && sotiemcan != arr[m]){
				sotiemcan = arr[m-1];
			}
			else{
				break;
			}				
		}
		
			
	}
	// truong hop khong tim thay
	for (int i = 0; i<n;i++){
		if (arr[i]>=x){
			printf("%d",arr[i-1]);
			break;

		}

	}
}
