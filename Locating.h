#pragma once
#include"seqlist.h"

//����˳����۰���ҷ�
int BinarySearch(seqlist q,DataType x) {
	//�ɹ�����xλ�ã����򷵻�-1
	int low = 0, high = q.size - 1;//ȷ�����ҵ��Ͻ��½�
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (q.list[mid] == x) {
			return mid;
		}
		else if (q.list[mid] < x) {
			low = mid + 1;
		}
		else if (q.list[mid] > x) {
			high = mid - 1;
		}
	}
	return -1;
}