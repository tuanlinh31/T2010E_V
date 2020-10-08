#include <stdio.h>
#include <math.h>
int main () {
	int x = 4000;
	float sotienlai; 
	float sonhan;
	sonhan = ((float) pow((1+(0.08/12)),48));
	sotienlai = 4000* (float)sonhan;
	printf("so tien lai sau 4 nam voi lai suat 8%% 1 nam la : %f",sotienlai);
}
