#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/**
 *
 *   Лесенка 2
 *
 *   54321
 *   5432
 *   543
 *   54
 *   5
 */

int main()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    printf("Enter digit n from 0 to 9: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        for (int m = n; m >= k; m--) { printf("%d", m); }
        printf("\n");
    }

    return 0;
}
