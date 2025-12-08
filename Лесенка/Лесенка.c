#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "ru");
    int n = 0;
    printf("¬ведите число от 1 до 9: ");
    scanf("%d", &n);
    for (int k = 1; k <= n; k++) {
        for (int m = 1; m <= k; m++) { printf("%d", m); }
        printf("\n");
    }
    return 0;
}
