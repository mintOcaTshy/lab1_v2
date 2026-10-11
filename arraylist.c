#include <stdio.h>
#include <stdlib.h>
#include "arraylist.h"

void init(ArrayList *list) {
    list->capacity = 4;
    list->size = 0;
    list->data = (int*)malloc(list->capacity * sizeof(int)); 
}

void destroy(ArrayList *list) {
    free(list->data);
    list->data = NULL;
    list->size = 0;
    list->capacity = 0;
}

void add(ArrayList *list, int item) {
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->data = (int*)realloc(list->data, list->capacity * sizeof(int));
    }
    list->data[list->size] = item;
    list->size++;
}

void insert(ArrayList *list, int index, int item) {
    if (index < 0 || index > list->size) return;
    if (list->size >= list->capacity) {
        list->capacity *= 2;
        list->data = (int*)realloc(list->data, list->capacity * sizeof(int));
    }
    for (int i = list->size; i > index; i--) {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = item;
    list->size++;
}

int get_size(ArrayList *list) {
    return list->size;
}

void remove_item(ArrayList *list, int index) {
    if (index < 0 || index >= list->size) return; 
    for (int i = index; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
}

void set(ArrayList *list, int index, int item) {
    if (index >= 0 && index < list->size) {
        list->data[index] = item;
    }
}

int get(ArrayList *list, int index) {
    if (index >= 0 && index < list->size) {
        return list->data[index];
    }
    return -1;
}
