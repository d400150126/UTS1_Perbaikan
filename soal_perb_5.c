#include <stdio.h>
#include <math.h>

float fungsiku(x, m){
	float y ;
	y = sqrt(5 * pow(x, 3) - pow (x, (m-1)) + 12);
	return y;
}

int main(){
	int a, b;
	printf("Masukkan Nilai a = ");scanf("%i", &a);
	printf("Masukkan Nilai b = ");scanf("%i", &b);
    float y = 0;
	y = fungsiku(a, b);
	printf("-------------------------------------\n");
	printf("x=%d, m=%d, hasilnya y=%f \n",a,b,y);
	return 0;
}
