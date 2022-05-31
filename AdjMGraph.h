#pragma once
#include"seqlist.h"
typedef struct {
	seqlist Vertices;//存放顶点的顺序表
	int edge[MaxVertices][MaxVertices];//存放边的邻接矩阵
	int numOfEdges;//边的条数
}AdjMGraph;

//初始化n个节点的顶点顺序表和邻接矩阵
void Initiate(AdjMGraph* G,int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++){
			if
				(i == j)G->edge[i][j] = 0;
			else
				G->edge[i][j] = MaxWeight;//除了本身赋0，其他全部赋无穷大
		}
	G->numOfEdges = 0;///边的条数置0
	ListInitiate(&G->Vertices);//顺序表初始化
}

//插入顶点，即再顺序表表位插入
void InsertVertex(AdjMGraph* g,DataType vertex) {
	ListInsert(&g->Vertices,g->Vertices.size,vertex);//顺序表插入函数
}

//插入边
void InsertEdge(AdjMGraph* g,int v1,int v2,int weight) {
	//增加边<v1，v2>，其权值为weight
	if (v1 < 0 || v1 >= g->Vertices.size || v2 < 0 || v2 >= g->Vertices.size) {
		printf("参数v1或v2越界！\n");
		return;
	}
	g->edge[v1][v2] = weight;
	g->numOfEdges++;//边数加一
}

//删除边，若删除一条无向边可通过，可通删除两条有向边代替，实现双向删除
void DeleteEdge(AdjMGraph* g,int v1,int v2) {
	if (v1 < 0 || v1 >= g->Vertices.size || v2 < 0 || v2 >= g->Vertices.size||v1==v2) {
		printf("参数v1或v2出错！\n");
		return;
	}
	if (g->edge[v1][v2] == MaxWeight) {
		printf("该边不存在！\n");
		return;
	}
	g->edge[v1][v2] = MaxWeight;
	g->numOfEdges--;//边数减一
}

//取第一个邻接顶点，
//在邻接矩阵中，顶点v的第一个邻接顶点是再邻接矩阵中v所在的行
//从第一个矩阵元素开始的非0且非无穷大的顶点
//成功返回顶点序号，失败返回-1
int GetFristVex(AdjMGraph g,int v) {
	int col;//列标，参数v为行标
	if (v<0||v>=g.Vertices.size) {
		printf("参数v越界！"); 
		return -1;
	}
	for (col = 0; col < g.Vertices.size; col++) {
		if (g.edge[v][col] != 0 && g.edge[v][col] != MaxWeight) {
			return col;
		}
	}
	return -1;
}

//去下一个邻接顶点
//对于邻接矩阵来说，v1的邻接顶点v2的下个邻接顶点，
//在第v行中从第v2+1个矩阵元素开始非0且非无穷大的顶点
//成功返回顶点序号，失败返回-1
int GetNextVex(AdjMGraph g,int v1,int v2) {
	int col;
	if (v1 < 0 || v1 >= g.Vertices.size || v2 < 0 || v2 >= g.Vertices.size) {
		printf("参数v1或v2越界！\n");
		return -1;
	}
	for (col = v2 + 1; col < g.Vertices.size; col++) {//col起始为v2+1
		if (g.edge[v1][col] != 0 && g.edge[v1][col] != MaxWeight) {
			return col;
		}
	}
	return -1;
}