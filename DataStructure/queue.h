#pragma once

typedef int element;

typedef struct _node {
	element* arr;
	int front;
	int back;
	int capacity;
	int size;
} Queue;