#include "stdio.h"
#include"malloc.h"
typedef int datatype;
#include"linlist.h"
int main() {
	slnode* head;
	int i, x, array[] = { 5,12,14,18,23,34 };
	ListInitiate(&head);
	for (i = 0; i < sizeof(array) / sizeof(int); i++) {
		ListInsert(head, i, array[i]);
	}
	for (i = 0; i < ListLength(head); i++) {
		ListGet(head, i, &x);
		printf("%d   ",x);
	}
	printf("\n");
	ListInsertInAscending(head, 15);
	for (i = 0; i < ListLength(head); i++) {
		ListGet(head, i, &x);
		printf("%d   ",x);
	}


	return 0;
}