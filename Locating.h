#pragma once
#include"seqlist.h"

//有序顺序表折半查找法
int BinarySearch(seqlist q,DataType x) {
	//成功返回x位置，否则返回-1
	int low = 0, high = q.size - 1;//确定查找的上界下界
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