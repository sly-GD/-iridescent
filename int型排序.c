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
//	int array[MaxSize]= { 38,5,19,26,49,97,1,66 }; //不能用strlen
//	ListInitiate(&l);
//	for (i = 0; i < 8; i++) {
//		ListInsert(&l,i,array[i]);
//	}
//	printf("直接插入排序：");
//	InsertSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	for (i = 0; i < 8; i++) {
//		ListDelete(&l, i, &x);
//		ListInsert(&l,i,array[i]);
//	}
//	//每次排好序后要重新打乱
//	printf("\n直接选择排序：");
//	SelectSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	for (i = 0; i < 8; i++) {
//		ListDelete(&l, i, &x);
//		ListInsert(&l,i,array[i]);
//	}
//	printf("\n冒泡排序：");
//	BubbleSort(l.list,8);
//	for (i = 0; i < 8; i++) {
//		printf("%d   ",l.list[i]);
//	}
//
//	return 0;
//}