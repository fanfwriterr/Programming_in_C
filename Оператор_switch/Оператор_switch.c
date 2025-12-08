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
    setlocale(LC_ALL,"russian");
    int day = 3;
    switch(day)
    {
    case 1: printf("понедельник\n"); break;
    case 2: printf("вторник\n"); break;
    case 3: printf("среда\n"); break;
    case 4: printf("четверг\n"); break;
    case 5: printf("пятница\n"); break;
    case 6: printf("суббота\n"); break;
    case 7: printf("воскресенье\n"); break;
    default: printf("неверный день недели!\n");
    }
    return 0;
}
