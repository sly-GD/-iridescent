#pragma once


typedef struct {
	
	DataType list[maxsize];
	int size;

}seqlist;

//��ʼ��˳���
void ListInitiate(seqlist* L) {
	L->size = 0;
}

//��ǰԪ����
int ListLength(seqlist l) {
	return l.size;
}

//����Ԫ�أ��ɹ�����1��ʧ�ܷ��� 0��
int ListInsert(seqlist* l, int i, DataType x) {
	int j;
	if (l->size > maxsize)
	{
		printf("˳���������\n");
		return 0;
	}
	else if (i<0 || i>l->size) {
		printf("���� i ���Ϸ���");
			return 0;
	}
	else {
		for(j = l->size; j > i; j--) 
			l->list[j] = l->list[j - 1];
			l->list[i] = x;
			l->size++;
			return 1;
		
		
	}
}

//ɾ��Ԫ�أ����浽x���ɹ�����1��ʧ�ܷ���0��
int ListDelete(seqlist* l, int i, DataType* x) {
	int j;
	if (l->size <= 0) {
		printf("˳���գ���Ԫ�ؿ�ɾ��");
			return 0;
	}
	else if (i<0 || i>l->size - 1) {
		printf("����i���Ϸ���");
		return 0;
	}
	else {
		*x = l->list[i];
		for (j = i + 1; j <= l->size-1 ; j++) 
			l->list[j - 1] = l->list[j];
			l->size--;
			return 1;
		
	}
}

//ȡ��Ԫ�أ�����x���ɹ�����1��ʧ�ܷ���0��
int ListGet(seqlist l, int i, DataType *x) {
	if (i<0 || i>l.size - 1) {
		printf("����i���Ϸ���");
		return 0;
	}
	else {
		*x = l.list[i];
		return 1;
	}
}

