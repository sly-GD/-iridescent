#pragma once
#include"AdjMGraph.h"
typedef struct {
	int row;
	int col;
	int weight;
}RowColWeight;//边信息的结构体定义

//创建图
void CreatGraph(AdjMGraph* g, DataType v[], int n, RowColWeight E[], int e) {
//插入那个顶点v[],e条边信息E[]
	int i, k;
	Initiate(g, n);
	for (i = 0; i < n; i++) {
		InsertVertex(g, v[i]);
	}
	for (k = 0; k < e; k++) {
		InsertEdge(g,E[k].row,E[k].col,E[k].weight);
	}
}