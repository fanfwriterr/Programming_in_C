/**
 *  switch - оператор выбора
 *
 *  switch (выражение)
 *  {
 *      case константа1:
 *          операторы...
 *      break;
 *
 *      case константа2: ...
 *      ...
 *
 *      default:
 *          операторы, выполняющиеся в случае, если ни один из вариантов не подошел.
 *  }
 *
 */

#include <locale.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL,"Russian");
    int day = 3;
    switch(day)
    {
    case 1: printf("Понедельник\n"); break;
    case 2: printf("Вторник\n"); break;
    case 3: printf("Среда\n"); break;
    case 4: printf("Четверг\n"); break;
    case 5: printf("Пятница\n"); break;
    case 6: printf("Суббота\n"); break;
    case 7: printf("Воскресенье\n"); break;
    default: printf("Неверный день недели!\n");
    }
    return 0;
}
