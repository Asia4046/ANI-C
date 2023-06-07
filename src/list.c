#include "include/list.h"

list_T* init_list(size_t item_size)
{
    list_T* list = calloc(1, sizeof(struct  LIST_STRUCT));
    list->size = 0;
    list->iteam_size = item_size;
    list->items = 0;

    return list;
} 

void list_push(list_T* list, void* item)
{
    list->size += 1;

    if(!list->items)
    {
        list->items = calloc(1, list->iteam_size);
    } else {
        realloc(list->items, (list->size * list->iteam_size))
    }
}