#include "Queue.h"

void intialize(struct Queue* queue, size_t size)
{
    queue->values   = malloc(size);
    queue->capacity = size;
    queue->size     = 0;
}

bool enQueue(struct Queue* queue, void* value)
{
    if(queue->size == queue->capacity)
    {
        return true;
    }
    else
    {
        queue->values[queue->size++] = value;
        return false;
    }
}

void* deQueue(struct Queue* queue)
{
    if(queue->size < 1)
        return NULL;
    void* result = queue->values[0];
    memmove(queue->values, queue->values+1, (queue->size)*sizeof(void*));
    queue->size--;
    return result;
}
