/*
CH-230-A
a8_p2.c
Krishna Gautam
kgautam@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if (queue_is_full(pq)==1)
    {
        return -1;
    }
    else
    {
        Node *new_el;
        new_el= (Node *)malloc(sizeof(Node));
        if(new_el==NULL)
        {
            return -1;
    }    
        new_el->item = item; 
        new_el->next = NULL;
        if(queue_is_empty(pq) == 1)
        {
            pq->front = new_el;
                pq->rear = new_el;
        }
        else{
            pq->rear->next = new_el;
            pq->rear= new_el;
        }    
        pq->items = pq->items+1;
    }
        return 0;
}

int dequeue(Item *pitem, Queue *pq)
{	
	Node *apex;
	apex = pq->front;
	*pitem = pq->front->item;
	pq->front = pq->front->next;
	
	free(apex); 
	
	if (queue_is_empty(pq))
	{
		pq->front = NULL;
		pq->rear = NULL;
	}
	pq->items = pq->items-1;
	
	return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}