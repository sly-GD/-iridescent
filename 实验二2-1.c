#include "stdio.h"
#include "math.h"
#include"malloc.h"
#define maxsize 100     //Ҫ��#include "seqlist.h"֮ǰ�����
typedef int DataType;
#include "seqlist.h"
void main() {
	seqlist mylist;
	int i, x;

	ListInitiate(&mylist);
	for (i = 0; i < 10; i++) {
		while (ListInsert(&mylist, i, i + 1)) {
			printf("�ɹ�����%d\n", i + 1); break;
		}
	}
	ListDelete(&mylist, 4, &x);


	for (i = 0; i < ListLength(mylist); i++) {
		ListGet(mylist, i, &x);
		printf("%d  ", x);

	}

}