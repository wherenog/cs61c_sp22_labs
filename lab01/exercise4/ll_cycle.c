#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    const node *fast_ptr = head;
    const node *slow_ptr = head;
    if (head == NULL)
        return 0;
    if (fast_ptr->next->next == NULL) 
        return 0;
    while (fast_ptr != NULL && fast_ptr->next != NULL && fast_ptr->next->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
        if (fast_ptr == slow_ptr)
            return 1;
    }
}
