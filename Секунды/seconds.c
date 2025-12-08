#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int k; // kol-vo seconds 
	int hour;
	int min;
	int sec;
	scanf("%d", &k);
	hour = k / 3600;
	min = k % 3600 / 60;
	sec = k % 60;
	printf("%d:%d:%d", hour, min, sec);

	return 0;
}
