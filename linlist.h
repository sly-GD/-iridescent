#pragma once

typedef struct node {
	datatype data;
	struct node* next;
}slnode;

//初始化链表
void ListInitiate(slnode** head) {
	*head = (slnode*)malloc(sizeof(slnode));
	(*head)->next = NULL;
}

//求当前元素个数
int ListLength(slnode* head) {
	slnode* p = head;
	int size=0;
	while (p->next != NULL) {
		p = p->next;
		size++;
	}
	return size;
}

//插入元素（成功返回1，失败返回0）
int ListInsert(slnode* head, int i, datatype x) {
	slnode* p = head,*q;
	int j;
	j = -1;
	while (p->next != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j != i - 1) {
		printf("插入位置错误！\n");
		return 0;
	}
	q = (slnode*)malloc(sizeof(slnode));
	q->data = x;
	q->next = p->next;
	p->next = q;
	return 1;

}

//删除元素（成功返回1，失败返回0）
int ListDelete(slnode* head, int i, datatype* x) {
	slnode* p,* s;
	int j;
	p = head;
	j = -1;
	while (p->next != NULL && p->next->next != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j != i - 1) {
		printf("删除元素位置错误！\n");
		return 0;
	}

	s = p->next;
	*x = s->data;
	p->next = p->next->next;
	free(s);
	return 1;

}

//取元素（成功返回1，失败返回0）
int ListGet(slnode* head, int i, datatype* x) {
	slnode* p;
	int j;
	p = head;
	j = -1;
	while (p->next != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (j != i) {
		printf("取元素位置错误！\n");
		return 0;
	}
	*x = p->data;
	return 1;
}

//撤销单链表
void Destroy(slnode** head) {
	slnode* p, * p1;
	p = *head;
	while (p != NULL) {
		p1 =p;
		p = p->next;
		free(p1);
	}
	*head = NULL;
}

//插入元素保持链表递增顺序（用两个指针一前一后，后面的为比较指针，前面的为插入位置。从而实现插入）
void ListInsertInAscending(slnode* head, datatype x) {
	slnode* curr, * pre, * q;
	curr = head->next;
	pre = head;
	while (curr != NULL && curr->data <= x) {
		pre = curr;
		curr = curr->next;
	}
	q = (slnode*)malloc(sizeof(slnode));
	q->data = x;
	q->next = pre->next;
	pre->next = q;
}