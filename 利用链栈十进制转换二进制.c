#include"stdio.h"
#include"malloc.h"
typedef int DataType;
#include"linstack.h"
int main() {
	LSNode* head;
	DataType a;
	DataType b;
	StackInitiate(&head);//����-1����
	while (scanf("%d", &a)&&a!=-1) {
		printf("%d------>",a);
		
		
			ten_change_two(head, a);
	
		while (StackNotEmpty(head)) {
		StackPop(head,&b);
		printf("%d",b);
		}
		printf("\n\n");
	}
	
	Destroy(head);
	return 0;
}

//���ϵ���2ȡģ��2���õ�����ѹ��ջ��
int ten_change_two(LSNode* head,DataType x) {
	if (x == 0) {
		printf("%d", x);
	}
	while(x>0) {
		StackPush(head, x % 2);
			x = x / 2;
		}
	return 0;
}