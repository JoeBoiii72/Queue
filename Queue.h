#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

struct Queue
{
    size_t capacity;
    size_t size;
    void**  values;
};

typedef uint8_t bool;

void  intialize(struct Queue* queue, size_t size);
bool  enQueue(struct Queue* queue, void* value);
void* deQueue(struct Queue* queue);


#endif