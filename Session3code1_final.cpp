#include <stdio.h>
/*int main () {
	int x;
	printf("nhap so x: ");
	scanf("%d",&x);
	int a;
	int b;
	int c;
	int d;
	if (x<10000 && x >0) {
		
	
		a = x%10;
		b = (x/10) % 10;
		c = (x/100) % 10;
		d = (x/1000) % 10;
		printf("so nguoc cua so x la : %d%d%d%d",a,b,c,d);
	}	else {
		printf("no no");
	}
	
}*/

int main () {
	int x;
	printf("nhap so x: ");
	scanf("%d",&x);
	int sodaonguoc =0;
	int sodu;
	
	while (x>=1) {
		sodu = x%10;
		sodaonguoc = sodaonguoc*10 + sodu;
		x = x/10;
	}
	printf ("so dao nguoc cua %d la: %d",x,sodaonguoc);
}
