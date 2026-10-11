#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct {
    int *data;
    int size;
    int capacity;
} ArrayList;

void init(ArrayList *list);
void destroy(ArrayList *list);
void add(ArrayList *list, int item);
void insert(ArrayList *list, int index, int item);
int get_size(ArrayList *list); 
void remove_item(ArrayList *list, int index); 
void set(ArrayList *list, int index, int item);
int get(ArrayList *list, int index);

#endif
