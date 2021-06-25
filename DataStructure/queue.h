#pragma once

typedef int element;

typedef struct _node {
	element* arr;
	int front;
	int back;
	int capacity;
	int size;
} Queue;

void init_queue(Queue* q);
void push(Queue* q, element value);
void pop(Queue* q);
bool is_full(Queue* q);
bool is_empty(Queue* q);
int size(Queue* q);