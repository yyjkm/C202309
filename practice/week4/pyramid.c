#include <stdio.h>

int main() {
	int floor;
	printf("¸î ÃþÀ¸·Î ½×À»±î¿ä? (5~100)\n");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {  //ÃÑ floor ÁÙÀ» Ãâ·Â
		for (int j = 0; j < floor - 1 - i; j++) {  // floorÁÙ -1-i¸¸Å­ ºóÄ­ Ãâ·Â
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {  // i*2+1¸¸Å­ *À» ºóÄ­ µÚ¿¡ Ãâ·Â
			printf("*");
		}
		printf("\n");
	}
	return 0;
}