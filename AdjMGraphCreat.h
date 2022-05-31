#pragma once
#include"AdjMGraph.h"
typedef struct {
	int row;
	int col;
	int weight;
}RowColWeight;//����Ϣ�Ľṹ�嶨��

//����ͼ
void CreatGraph(AdjMGraph* g, DataType v[], int n, RowColWeight E[], int e) {
//�����Ǹ�����v[],e������ϢE[]
	int i, k;
	Initiate(g, n);
	for (i = 0; i < n; i++) {
		InsertVertex(g, v[i]);
	}
	for (k = 0; k < e; k++) {
		InsertEdge(g,E[k].row,E[k].col,E[k].weight);
	}
}