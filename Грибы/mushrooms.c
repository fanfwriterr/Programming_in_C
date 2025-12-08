#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "ru");
	int k = 0;
	printf("Введите число грибов:");
	scanf("%d", &k);
	printf("\n");
	if ((k%100 >= 11) && (k%100 <= 19)) { printf("%d грибов\n", k); }
	else {
		if ((k % 10 == 1)) { printf("%d гриб\n", k); }
		if ((k % 10 >= 2) && (k % 10 <= 4)) { printf("%d гриба\n", k); }
		if ((k % 10 >= 5) && (k % 10 <= 9) || (k % 10 == 0)) { printf("%d грибов\n", k); }
	}
	return 0;
}

