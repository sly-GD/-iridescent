#pragma once

typedef struct node {
	datatype data;
	struct node* next;
}slnode;

//��ʼ������
void ListInitiate(slnode** head) {
	*head = (slnode*)malloc(sizeof(slnode));
	(*head)->next = NULL;
}

//��ǰԪ�ظ���
int ListLength(slnode* head) {
	slnode* p = head;
	int size=0;
	while (p->next != NULL) {
		p = p->next;
		size++;
	}
	return size;
}

//����Ԫ�أ��ɹ�����1��ʧ�ܷ���0��
int ListInsert(slnode* head, int i, datatype x) {
	slnode* p = head,*q;
	int j;
	j = -1;
	while (p->next != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j != i - 1) {
		printf("����λ�ô���\n");
		return 0;
	}
	q = (slnode*)malloc(sizeof(slnode));
	q->data = x;
	q->next = p->next;
	p->next = q;
	return 1;

}

//ɾ��Ԫ�أ��ɹ�����1��ʧ�ܷ���0��
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
		printf("ɾ��Ԫ��λ�ô���\n");
		return 0;
	}

	s = p->next;
	*x = s->data;
	p->next = p->next->next;
	free(s);
	return 1;

}

//ȡԪ�أ��ɹ�����1��ʧ�ܷ���0��
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
		printf("ȡԪ��λ�ô���\n");
		return 0;
	}
	*x = p->data;
	return 1;
}

//����������
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

//����Ԫ�ر����������˳��������ָ��һǰһ�󣬺����Ϊ�Ƚ�ָ�룬ǰ���Ϊ����λ�á��Ӷ�ʵ�ֲ��룩
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