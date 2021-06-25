#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void init_queue(Queue * q) {
	q->front = 0;
	q->back = -1;
	q->capacity = 5;
	q->arr = (element*)malloc(sizeof(element) * q->capacity);
	q->size = 0;
}

void push(Queue * q, element value) {
	if (is_full(q)) {
		q->capacity *= 2;
		realloc(q->arr, sizeof(element) * q->capacity);
	}
	q->back += 1;
	q->back %= q->capacity;
	q->arr[q->back] = value;
}

void pop(Queue * q) {
	if (is_empty(q)) 
		return;

	q->front += 1;
	q->front %= q->capacity;
}

bool is_full(Queue* q) {
	if ((q->back + 2) % q->capacity == q->front) {
		return true;
	}
	else
		return false;
}

bool is_empty(Queue* q) {
	if ((q->back + 1) % q->capacity == q->front) {
		return true;
	} else 
		return false;
}

int size(Queue * q) {
	return q->size;
}