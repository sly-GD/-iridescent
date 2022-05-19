#pragma once
typedef struct {
	char* str;
	int MaxLength;
	int length;
}DString;

//��ʼ������̬�洢��
void Initiate(DString* S, int max,char* string) {
	int i;
	S->str = (char*)malloc(sizeof(char) * max);
	S->MaxLength = max;
	S->length = strlen(string);
	for (i = 0; i < S->length; i++) {
		S->str[i] = string[i];
	}
}

//�����ִ�--��posλ�ò����ִ�T���ɹ�����1��ʧ�ܷ���0��
int Insert(DString* S, int pos, DString T) {
	int i;
	if (pos < 0) {
		printf("����λ�ô���\n");
		return 0;
	}
	if (S->MaxLength < S->length + T.length) {
		realloc(S->str, (S->length + T.length) * sizeof(char));//�ռ䲻����������
		S->MaxLength = S->length + T.length;
	}
	for (i = S->length - 1; i <= pos; i--) {//��pos�����κ���
		S->str[i + T.length] = S->str[i];
	}
	for (i = 0; i < T.length; i++) {
		S->str[pos + i] = T.str[i];
	}S->length += T.length;
	return 1;
}

//ɾ���ִ�--��posλ��ɾ��len���ȵ��ַ������ɹ�����1.ʧ�ܷ���0��
int Delete(DString* S, int pos, int len) {
	int i;
	if (S->length <= 0) {
		printf("��������Ԫ�ؿ�ɾ��\n");
		return 0;
	}
	else if (pos < 0 || len<0 || pos + len>S->length) {
		printf("����pos��len���Ϸ���\n");
		return 0;
	}
	else {
		for (i = pos + len; i <= S->length - 1; i++) {
			S->str[i - len] = S->str[i];	
		}
		S->length = S->length - len-1;
		return 1;
	}

}

//ȡ�Ӵ�����posλ��ȡ��len�����ִ���T����(�ɹ�����1��ʧ�ܷ���0)
int SubString(DString* S, int pos, int len,DString* T) {
	int i;
	if (pos < 0 || len<0 || pos + len>S->length) {
		printf("����pos��len����\n");
		return 0;
	}
	if(len>T->MaxLength){
		T->str = (char*)malloc(sizeof(char) * len);
		T->MaxLength = len;
	}
	for (i = 0; i < len - 1; i++) {
		T->str[i] = S->str[pos + i];
	}
	T->length = len;
	return 1;
}

//�����ռ�
void Destroy(DString* S) {
	free(S->str);
	S->MaxLength = 0;
	S->length=0;
}
