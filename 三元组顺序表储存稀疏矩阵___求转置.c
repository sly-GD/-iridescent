#include"stdio.h"
#include"string.h"
#define max 50
typedef int elemtype;
typedef struct {
	int i;
	int j;
	elemtype d;
}DataType;
//����ϡ���������
typedef struct {
	int md;//����
	int nd;//����
	int td;//����Ԫ�ظ���
	DataType data[max];//��Ԫ������
}TriType;

void PrintMatrix(TriType T);
int InitiateTriType(TriType* T, int a[]);
void InitiateDataType(DataType a[]);
int TransMatrix(TriType T, TriType *T1);
int main() {
	TriType T,T1;
	int matProperties[3];
	//DataType array[max];
	int i;
	do {
		printf("�����������������������������Ԫ�ظ�����\n");
		scanf("%d%d%d", &matProperties[0], &matProperties[1], &matProperties[2]);
		if (InitiateTriType(&T, matProperties) == 1) {
			InitiateTriType(&T1, matProperties);
			InitiateDataType(T.data);
			if (TransMatrix(T, &T1) == 1) {
				printf("%d\n", T1.md);printf("%d", T1.nd);
				printf("\nת��ǰ����Ϊ��\n");
				PrintMatrix(T);
				printf("\nת�ú����Ϊ��\n");
				PrintMatrix(T1);
			}
		}
	} while(printf("\nEnter 1 to continue and 0 to end: ")
				&& scanf("%d", &i) && getchar()&&printf("\n") && i != 0);
	return 0;
}

int InitiateTriType(TriType* T,int a[]) {
	int flag;
	if (a[2] == 0) {
		printf("�þ��󲻺Ϸ���\n");
		flag = 0;
	}
	else{
		T->md = a[0];
		T->nd = a[1];
		T->td = a[2];
		flag = 1;
	}
	return flag;
}
void InitiateDataType(DataType a[]) {
	int i,r,c,temp;
	printf("������������Ԫ�飬���С��С�ֵ��˳�����롣����0 0 0������\n");
	for (i = 0; scanf("%d%d%d",&r,&c,&temp )&&temp!=-1; i++) {
		a[i].i = r;
		a[i].j = c;
		a[i].d = temp;
		if (temp == 0)break;
	}
}
int TransMatrix(TriType T, TriType* T1){
	int p, q,col,cont=0,flag;
	if (T.data[0].d == 0) {
		printf("The Matrix A=0\n");
		flag = 0;
	}
	else {
		q = 0; 
		
		for(col=1;col<=T.nd;col++)
			for (p = 0; p <= T.td; p++) {
				if (T.data[p].j == col) {
					T1->data[q].i = T.data[cont].j;
					T1->data[q].j = T.data[cont].i;
					T1->data[q].d = T.data[cont++].d;
					q++;
				}
			}
		T1->md = T.nd;//�������У���ԷǷ���
		T1->nd = T.md;
		flag = 1;
	}
	return flag;
}


void PrintMatrix(TriType T ) {
	int i,j,k;
	for (i =1; i <=T.md;i++) {
		for (j = 1; j <=T.nd; j++) {
			int temp = 0;//��־�������ж��Ƿ����0
				for (k = 0; k < T.td; k++) {
					if (T.data[k].i == i && T.data[k].j == j) {
						printf("%5d  ",T.data[k].d);
						temp = 1;
						break;
					}
				}
				if(temp==0)
				printf("%5d  ",0);
		}
		printf("\n");
		
	}
}