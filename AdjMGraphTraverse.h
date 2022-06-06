#pragma once
#include"AdjMGraph.h"
#include"seqcqueue.h"

//连通图的深度优先访问遍历
void DepthFSearch(AdjMGraph g, int v, int visited[], void Visit(DataType item)) {
	//g中v为初始顶点，访问函数Visit
	//visit[]是用来标记顶点是否被访问过的（0是未访问，1是已访问）
	int w;
	Visit(g.Vertices.list[v]);
	visited[v] = 1;
	w = GetFristVex(g,v);
	while (w!=-1) {//所有visited都标记为1，递归结束
		if (!visited[w]) {
			DepthFSearch(g, w, visited, Visit);
		}
		w = GetNextVex(g, v, w);//若该顶点已访问，则w取该顶点的下一个顶点
	}

}

//非连通图的深度访问遍历
void DepthFirstSearch(AdjMGraph g, void Visit(DataType item)) {
	//连通图是指图中任意一对顶点都是连通的
	int i;
	int* visited = (int*)malloc(sizeof(int)*g.Vertices.size);
	for (i = 0; i < g.Vertices.size; i++) {
		visited[i] = 0;//标记数组全部赋初值0
	}
	for (i = 0; i < g.Vertices.size; i++) {
		if (!visited[i]) {
			DepthFSearch(g,i,visited,Visit);
		}
	}
	free(visited);
}

//连通图的广度优先遍历
void BroadFSearch(AdjMGraph g,int v,int visited[],void Visit(DataType item)) {
	//g中v为初始顶点，访问函数Visit
	//visited[]是用来标记顶点是否被访问过的（0是未访问，1是已访问）
	int u, w;
	SeqCQueue q;
	Visit(g.Vertices.list[v]);
	visited[v] = 1;
	QueueInitiate(&q);
	QueueAppend(&q, v);
	while (QueueNotEmpty(q)) {//依次出队访问所有连通点
		QueueDelete(&q,&u);
		w = GetFristVex(g,u);
		while (w != -1) {//不换根顶点，把出队列的这个顶点的所有连通点都打印出来，并且压入队列
			if (!visited[w]) {
				Visit(g.Vertices.list[w]);
				visited[w] = 1;
				QueueAppend(&q, w);
			}
			w = GetNextVex(g,u,w);
		}		
	}
}

//非连通图的广度优先遍历
void BroadFirstSearch(AdjMGraph g,void Visit(DataType item)) {
	int i;
	int* visited = (int*)malloc(sizeof(int) * g.Vertices.size);
	for (i = 0; i < g.Vertices.size; i++) {
		visited[i] = 0;
	}
	for (i = 0; i < g.Vertices.size; i++) {
		if (!visited[i]) {
			BroadFSearch(g, i, visited, Visit);//i作为根顶点传过去
		}
	}
	free(visited);
}