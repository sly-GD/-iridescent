#include"stdio.h"
#define maxsize 100
typedef int DataType;
#include "seqlist.h"
int main() {
	seqlist mylist;
	int i;
	int array[] = { 21,23,14,5,56,17,31 };
	ListInitiate(&mylist);
	for (i = 0; i <= sizeof(array) / sizeof(int) - 1; i++) {
		ListInsert(&mylist, i, array[i]);
		printf("%d   ", mylist.list[i]);
	}
	printf("\n²åÈëºó£º\n");

	ListInsert(&mylist, 2, 68);
	for (i = 0; i < ListLength(mylist); i++) {
		printf("%d   ", mylist.list[i]);
	}
	printf("\nÄæÖÃºó£º\n");
	ListReverse(&mylist);
	for (i = 0; i < ListLength(mylist); i++) {
		printf("%d   ", mylist.list[i]);
	}
	return 0;
}