#include <stdio.h>
#include "arraylist.h"

int main() {
    ArrayList list;
    init(&list);

    printf("Тестуємо масив (Облік вигнаних проклять по днях):\n");
    
    add(&list, 3);  // Понеділок (легкий день)
    add(&list, 15); // Вівторок (було багато роботи)
    add(&list, 8);  // Середа
    
    printf("Кількість днів у звіті: %d\n", get_size(&list));
    printf("У середу було вигнано проклять: %d\n", get(&list, 2));

    printf("\nВидаляємо запис за вівторок (помилка в архіві)...\n");
    remove_item(&list, 1); 
    
    printf("Тепер днів у звіті: %d\n", get_size(&list));
    printf("А на індексі 1 тепер лежить результат середи: %d\n", get(&list, 1));

    destroy(&list);
    printf("Масив очищено, архів закрито!\n");

    return 0;
}
