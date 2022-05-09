#include "stdio.h"
#include"malloc.h"
typedef int datatype;
#include"linlist.h"
int main() {
	slnode* head;
	int i,x;
	ListInitiate(&head);
	for (i = 0; i < 10; i++) {
		ListInsert(head, i, i + 1);
	}
	for (i = 0; i < ListLength(head); i++) {
		ListGet(head, i, &x);
		printf("%d   ", x);
	}
	printf("\n");
	ListDelete(head, 4, &x);
	for (i = 0; i < ListLength(head); i++) {
		ListGet(head, i, &x);
		printf("%d   ",x);
	}


	return 0;
}