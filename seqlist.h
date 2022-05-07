#pragma once


typedef struct {
	
	DataType list[maxsize];
	int size;

}seqlist;

//初始化顺序表
void ListInitiate(seqlist* L) {
	L->size = 0;
}

//求当前元素数
int ListLength(seqlist l) {
	return l.size;
}

//插入元素（成功返回1，失败返回 0）
int ListInsert(seqlist* l, int i, DataType x) {
	int j;
	if (l->size > maxsize)
	{
		printf("顺序表已满！\n");
		return 0;
	}
	else if (i<0 || i>l->size) {
		printf("参数 i 不合法！");
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

//删除元素，保存到x（成功返回1，失败返回0）
int ListDelete(seqlist* l, int i, DataType* x) {
	int j;
	if (l->size <= 0) {
		printf("顺序表空，无元素可删！");
			return 0;
	}
	else if (i<0 || i>l->size - 1) {
		printf("参数i不合法！");
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

//取出元素，存于x（成功返回1，失败返回0）
int ListGet(seqlist l, int i, DataType *x) {
	if (i<0 || i>l.size - 1) {
		printf("参数i不合法！");
		return 0;
	}
	else {
		*x = l.list[i];
		return 1;
	}
}

//顺序表逆置（借助中间变量）（成功返回1，失败返回0）
int ListReverse(seqlist* l) {
	int i;
	DataType temp;
	if (l->size <= 1) {
		printf("顺序表为空！\n");
		return 0;
	}
	else {
		for (i = 0; i <= ListLength(*l) / 2; i++) {
			temp = l->list[l->size - 1 - i];
			l->list[l->size - 1 - i] = l->list[i];
			l->list[i] = temp;

		}
		return 1;
	}
}

//就地逆置（使用表中多余未用的空间，至少一个）（成功返回1，失败返回0）
int ListReverseLocally(seqlist* l) {
	int i,j;
	if(l->size == maxsize) {
		printf("空间不足，无法逆置！\n");
		return 0;
	}
	else {
		for (i = 0; i < l->size; i++) {
			for (j = l->size;j>=i;j--) {
				l->list[j] = l->list[j-1 ];
			}
			l->list[i] = l->list[l->size];
		}

		return 1;
	}
}
