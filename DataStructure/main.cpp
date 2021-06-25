#include <stdio.h>
#include "queue.h"
#include <iostream>
#include <assert.h>

void test_queue();

int main() {
	printf("Hello, World!");

	test_queue();

	return 0;
}

void test_queue() {
	printf("-- test queue --\n");
	Queue *q = (Queue*)malloc(sizeof(Queue));
	init_queue(q);
	push(q, 1);
	push(q, 2);
	push(q, 3);
	assert(q->front == 3);
	printf("-- queue test complete --\n");
}