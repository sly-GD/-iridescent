#include"stdio.h"
#define maxsize 100
typedef struct student {
	long number;
	char name[10];
	char sex[3];
	int age;
}studentType;

typedef studentType  DataType;
#include"seqlist.h"
int main() {
	seqlist mylist;
	int i;
	studentType x[3] = { {2000001,"张三","男",20},{2000002,"李四","男",21},{2000003,"WangWu","女",23} };
	studentType s;
	ListInitiate(&mylist);
	for (i = 0; i <= sizeof(x) / sizeof(studentType)-1;i++)
		ListInsert(&mylist, i, x[i]);
		for (i = 0; i < ListLength(mylist); i++) {
		
			ListGet(mylist, i, &s);
			printf("%d   %s   %s   %d\n", s.number, s.name, s.sex, s.age);
		}
		return 0;
}