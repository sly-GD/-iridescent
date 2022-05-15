#pragma once
typedef struct snode {
	DataType data;
	struct snode* next;
}LSNode;

//初始化带头结点
void StackInitiate(LSNode** head) {
	*head = (LSNode*)malloc(sizeof(LSNode));
	(*head)->next = NULL;
}

//判断堆栈是否非空（成功返回 1，失败返回 0）
int StackNotEmpty(LSNode* head) {
	if (head->next == NULL)return 0;
	else return 1;
}

//入栈（在栈顶插入）
void StackPush(LSNode* head, DataType x) {
	LSNode* p;
	p = (LSNode*)malloc(sizeof(LSNode));
	p->data = x;
	p->next = head->next;
	head->next = p;

}

//出栈由参数d带回（成功返回 1，失败返回 0）
int StackPop(LSNode* head, DataType* d) {
	LSNode* p = head->next;
	if (p == NULL) {
		printf("堆栈已空！");
		return 0;
	}
	*d = p->data;
	head->next = p->next;
	free(p);
	return 1;
}

//取栈顶元素由参数d带回（成功返回 1，失败返回 0）
int StackTop(LSNode* head, DataType* d) {
	LSNode* p = head->next;
	if (p == NULL) {
		printf("堆栈已空！");
		return 0;
	}
	*d = p->data;
	return 1;
}

//撤销动态申请空间
void Destroy(LSNode* head) {
	LSNode* p, * p1;
	p = head;
	while(p != NULL) {
		p1 = p;
		p = p->next;
		free(p1);
	}
}