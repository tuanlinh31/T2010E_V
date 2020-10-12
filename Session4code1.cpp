#include <stdio.h>
#include<conio.h>
int main() {
	int i,tonglientiep =0,n;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	
	for (i=1; i<=n;i++) {
		tonglientiep = tonglientiep +i;
	}
	printf("tong lien tiep cua so %d la: %d ",n,tonglientiep);
}
