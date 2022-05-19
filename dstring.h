#pragma once
typedef struct {
	char* str;
	int MaxLength;
	int length;
}DString;

//初始化（动态存储）
void Initiate(DString* S, int max,char* string) {
	int i;
	S->str = (char*)malloc(sizeof(char) * max);
	S->MaxLength = max;
	S->length = strlen(string);
	for (i = 0; i < S->length; i++) {
		S->str[i] = string[i];
	}
}

//插入字串--在pos位置插入字串T（成功返回1，失败返回0）
int Insert(DString* S, int pos, DString T) {
	int i;
	if (pos < 0) {
		printf("参数位置错误！\n");
		return 0;
	}
	if (S->MaxLength < S->length + T.length) {
		realloc(S->str, (S->length + T.length) * sizeof(char));//空间不足重新申请
		S->MaxLength = S->length + T.length;
	}
	for (i = S->length - 1; i <= pos; i--) {//将pos后依次后移
		S->str[i + T.length] = S->str[i];
	}
	for (i = 0; i < T.length; i++) {
		S->str[pos + i] = T.str[i];
	}S->length += T.length;
	return 1;
}

//删除字串--从pos位置删除len长度的字符串（成功返回1.失败返回0）
int Delete(DString* S, int pos, int len) {
	int i;
	if (S->length <= 0) {
		printf("数组中无元素可删！\n");
		return 0;
	}
	else if (pos < 0 || len<0 || pos + len>S->length) {
		printf("参数pos和len不合法！\n");
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

//取子串：从pos位置取出len长度字串由T带回(成功返回1，失败返回0)
int SubString(DString* S, int pos, int len,DString* T) {
	int i;
	if (pos < 0 || len<0 || pos + len>S->length) {
		printf("参数pos和len出错！\n");
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

//撤销空间
void Destroy(DString* S) {
	free(S->str);
	S->MaxLength = 0;
	S->length=0;
}
