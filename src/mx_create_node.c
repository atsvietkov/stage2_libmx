#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *head = NULL;
    if(!data) {
        return NULL;
    }
    else {
        head = malloc(sizeof(t_list));
        head->data = data;
        head->next = NULL;
        return head;
    }
}
