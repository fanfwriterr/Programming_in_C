#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "ru");
	int n = 0;
	printf("Введите число от 100 до 999: ");
	scanf("%d", &n);
	int h = n / 100;
	int s = n % 100;
	int t1 = s / 10;
	int t2 = s % 10;
	switch (h) {
	case 1:
		printf("Сто ");
		break;
	case 2:
		printf("Двести ");
		break;
	case 3:
		printf("Триста ");
		break;
	case 4:
		printf("Четыреста ");
		break;
	case 5:
		printf("Пятьсот ");
		break;
	case 6:
		printf("Шестьсот ");
		break;
	case 7:
		printf("Семьсот ");
		break;
	case 8:
		printf("Восемьсот ");
		break;
	case 9:
		printf("Девятьсот ");
		break;
	}
	if (s >= 10 && s <= 19) {

		switch (s) {
		case 10:
			printf("десять\n");
			break;
		case 11:
			printf("одиннадцать\n");
			break;
		case 12:
			printf("двенадцать\n");
			break;
		case 13:
			printf("тринадцать\n");
			break;
		case 14:
			printf("четырнадцать\n");
			break;
		case 15:
			printf("пятнадцать\n");
			break;
		case 16:
			printf("шестнадцать\n");
			break;
		case 17:
			printf("семнадцать\n");
			break;
		case 18:
			printf("восемнадцать\n");
			break;
		case 19:
			printf("девятнадцать\n");
			break;
		}
	}
	else {
		switch (t1) {
		case 0:
			break;
		case 2:
			printf("двадцать ");
			break;
		case 3:
			printf("тридцать ");
			break;
		case 4:
			printf("сорок ");
			break;
		case 5:
			printf("пятьдесят ");
			break;
		case 6:
			printf("шестьдесят ");
			break;
		case 7:
			printf("семьдесят ");
			break;
		case 8:
			printf("восемьдесят ");
			break;
		case 9:
			printf("девяносто ");
			break;
		}
		switch (t2) {
		case 0:
			break;
		case 1:
			printf("один\n");
			break;
		case 2:
			printf("два\n");
			break;
		case 3:
			printf("три\n");
			break;
		case 4:
			printf("четыре\n");
			break;
		case 5:
			printf("пять\n");
			break;
		case 6:
			printf("шесть\n");
			break;
		case 7:
			printf("семь\n");
			break;
		case 8:
			printf("восемь\n");
			break;
		case 9:
			printf("девять\n");
			break;
		}
	}
	return 0;
}