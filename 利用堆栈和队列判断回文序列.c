#include"stdio.h"
#include"string.h"
typedef char DataType;
#define MaxSize 100
#define MaxStackSize 100
#include"seqcqueue.h"
#include"seqstack.h"
//堆栈为先进后出，队列为先进先出。可以利用特性依次出栈、出队判断是否相同
int n;
int main() {
	SeqCQueue Q;
	SeqStack S;
	char array[MaxSize];
	char x, y;
	int i;
	QueueInitiate(&Q);
	StackInitiate(&S);
	memset(array,0,sizeof(array));
	while (gets(array) && array[0] != '0') {
		n = strlen(array);
		for (i = 0; i < n; i++) {
			QueueAppend(&Q, array[i]);
			StackPush(&S, array[i]);
		}
		/*QueueGet(Q, &x);
		StackTop(S,&y);
		printf("%c   %c",x,y);*/
		
		judge(&Q, &S);

		memset(array, 0, sizeof(array));//清空数组操作

		for (i = 0; i < Q.front; i++) {
			if (QueueNotEmpty(Q)) {
				QueueDelete(&Q, &x);
			}
		}
		while (StackNotEmpty(S)) {
			StackPop(&S, &y);
		}
	}
	
	
		/*for (i = 0; i <= S.top; i++) {
			if (!StackNotEmpty(S)) {
				StackPop(&S, &y);
				}
			}*/
	return 0;
}
int judge(SeqCQueue* q, SeqStack* s) {
	char a, b;
	int j;
	for (j = 0; j < n; j++) {
		QueueDelete(q, &a);
		StackPop(s,&b);
		if (a == b) {
			printf("出栈的：%c   ", a);
			//printf("\n");
			printf("出队列的：%c   ", b);
			printf("\n");
			if (!QueueNotEmpty(*q) && !StackNotEmpty(*s)) {
			printf("\n该序列为回文序列！\n\n");
			return 1;
		}
		}
		else {
			printf("出栈的：%c   ", a);
			printf("出队列的：%c   ", b);
			printf("\n该序列不是回文序列！\n\n");return 0; break;
			

		}
		//printf("\n");
		/*if (!QueueNotEmpty(*q) && !StackNotEmpty(*s)) {
			printf("\n该序列为回文序列！\n\n");
			return 1;
		}*/
		

	}return 1;
}
