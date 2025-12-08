#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru");
    int k = 0;
    scanf("%d", &k);
    printf("\n");
    if (k % 100 >= 11 && k % 100 <= 14)
    {
        printf("%d Грибов\n", k);
    }
    else
    {
        if (k % 10 == 1)
        {
            printf("%d Гриб\n", k);
        }
        else if (k % 10 >= 2 && k % 10 <= 4)
        {
            printf("%d Гриба\n", k);
        }
        else
        {
            printf("%d Грибов\n", k);
        }
    }
    return 0;
}
