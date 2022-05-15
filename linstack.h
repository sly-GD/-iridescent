#pragma once
typedef struct snode {
	DataType data;
	struct snode* next;
}LSNode;

//��ʼ����ͷ���
void StackInitiate(LSNode** head) {
	*head = (LSNode*)malloc(sizeof(LSNode));
	(*head)->next = NULL;
}

//�ж϶�ջ�Ƿ�ǿգ��ɹ����� 1��ʧ�ܷ��� 0��
int StackNotEmpty(LSNode* head) {
	if (head->next == NULL)return 0;
	else return 1;
}

//��ջ����ջ�����룩
void StackPush(LSNode* head, DataType x) {
	LSNode* p;
	p = (LSNode*)malloc(sizeof(LSNode));
	p->data = x;
	p->next = head->next;
	head->next = p;

}

//��ջ�ɲ���d���أ��ɹ����� 1��ʧ�ܷ��� 0��
int StackPop(LSNode* head, DataType* d) {
	LSNode* p = head->next;
	if (p == NULL) {
		printf("��ջ�ѿգ�");
		return 0;
	}
	*d = p->data;
	head->next = p->next;
	free(p);
	return 1;
}

//ȡջ��Ԫ���ɲ���d���أ��ɹ����� 1��ʧ�ܷ��� 0��
int StackTop(LSNode* head, DataType* d) {
	LSNode* p = head->next;
	if (p == NULL) {
		printf("��ջ�ѿգ�");
		return 0;
	}
	*d = p->data;
	return 1;
}

//������̬����ռ�
void Destroy(LSNode* head) {
	LSNode* p, * p1;
	p = head;
	while(p != NULL) {
		p1 = p;
		p = p->next;
		free(p1);
	}
}