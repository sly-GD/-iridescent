//#include"stdio.h"
//#include"string.h"
//#define MaxSize 20
//typedef int DataType;
//#include"seqlist.h"
//#include"SortingAlgorithm.h"
//
////typedef struct {
////	KeyType key;
////}DataType;
//
//int main() {
//	int i,x;
//	seqlist l;
//	int array[MaxSize]= { 38,5,19,26,49,97,1,66 }; //������strlen
//	ListInitiate(&l);
//	for (i = 0; i < 8; i++) {
//		ListInsert(&l,i,array[i]);
//	}
//	printf("ֱ�Ӳ�������");
//	InsertSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	for (i = 0; i < 8; i++) {
//		ListDelete(&l, i, &x);
//		ListInsert(&l,i,array[i]);
//	}
//	//ÿ���ź����Ҫ���´���
//	printf("\nֱ��ѡ������");
//	SelectSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	for (i = 0; i < 8; i++) {
//		ListDelete(&l, i, &x);
//		ListInsert(&l,i,array[i]);
//	}
//	printf("\nð������");
//	BubbleSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	return 0;
//}