#include <stdio.h>
#include <time.h>

int main() {
	//deklarasi variable
	int JAM, MENIT, DETIK;
	//input dari keyboard
	printf("Menghitung Waktu Mundur, Masukkan angka di bawah ini :\n");
    printf("Jam : ");scanf("%i", &JAM);
    printf("Menit : ");scanf("%i", &MENIT);
    printf("Detik : ");scanf("%i", &DETIK);
    printf("-------------------------------------------------------\n");
    printf("               Perhitungan Waktu mulai \n");
	time_t AWAL=0, AKHIR=0;
	AWAL = time( NULL );
	while  ((JAM != 0) || (MENIT != 0) || (DETIK !=0) ) {
			AKHIR = time( NULL );
			if (AKHIR > AWAL) {
				//proses
				if (DETIK==0) {
					if (MENIT==0) {
						if (JAM==0) {
						} else {
							JAM--;
							MENIT = 59;
							DETIK = 59;
						}
					} else {
						MENIT--;
						DETIK = 59;
					}
				} else {
					DETIK--;
				}
				printf("Waktu %02d:%02d:%02d \n", JAM, MENIT, DETIK);
				AWAL = time( NULL );
			}
	}

    system("pause");
	return 0;
}
