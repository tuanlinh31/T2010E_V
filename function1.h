#include <stdio.h>
#include "function.h"
#include <math.h>

void InMang(int arr[],int n){
	printf("\n Danh sach mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void NhapMang(int arr[],int n){
	printf("\nNhap gia tri cho mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

void SapXepMang(int arr[],int n, int t){
	
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(t==1){
				if(arr[j]>arr[j+1]){
					int temp = arr[j];
					arr[j]= arr[j+1];
					arr[j+1] = temp;
				}
			}else{
				if(arr[j]<arr[j+1]){
					int temp = arr[j];
					arr[j]= arr[j+1];
					arr[j+1] = temp;
				}
			}

		}
	}	
}

int SNTGanNhat(int a){

	
	for(int i = a+1;true;i++){
		int count =0;
		for(int j=1;j<=i;j++){
			if(i%j ==0){
				count++;
			}
		}
		if (count ==2){
			return i;
		}
	}
}

int TongTangDan(int n){
	int tong = 0;
	for(int i = 1;i<=n;i++){
		tong +=i;
	}
	return tong;
}

int ChuViTamGiac(int a,int b,int c){
	int chuvi = a +b + c;
	return chuvi;
}

int DienTichTamGiac(int a,int b, int c){
	 int p2 = ChuViTamGiac(a,b,c)/2;
	 float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	 return s; 
}

int UocChungLonNhat(int a, int b){
	if (a==b) return a;
	if (a>b){
		for(int i = b; i>=1;i--){
			if (a%i==0){
				return i;
			}
		}
	}else {
		for (int i = a;i>=1;i--){
			if(b%i==0){
				return i;
			}
		}
	}
}

int BoiChungNhoNhat(int a, int b){
	if (a==b) return a;
	if (a>b){
		for(int i = a;true;i++){
			if(i%a==0 && i%b ==0){
				return i;
			}
		}
	}else {
		for(int i = b;true;i++){
			if(i%b==0 && i%a==0){
				return i;
			}
		}
	}
}


