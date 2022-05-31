#pragma once
#include"seqlist.h"
typedef struct {
	seqlist Vertices;//��Ŷ����˳���
	int edge[MaxVertices][MaxVertices];//��űߵ��ڽӾ���
	int numOfEdges;//�ߵ�����
}AdjMGraph;

//��ʼ��n���ڵ�Ķ���˳�����ڽӾ���
void Initiate(AdjMGraph* G,int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++){
			if
				(i == j)G->edge[i][j] = 0;
			else
				G->edge[i][j] = MaxWeight;//���˱���0������ȫ���������
		}
	G->numOfEdges = 0;///�ߵ�������0
	ListInitiate(&G->Vertices);//˳����ʼ��
}

//���붥�㣬����˳����λ����
void InsertVertex(AdjMGraph* g,DataType vertex) {
	ListInsert(&g->Vertices,g->Vertices.size,vertex);//˳�����뺯��
}

//�����
void InsertEdge(AdjMGraph* g,int v1,int v2,int weight) {
	//���ӱ�<v1��v2>����ȨֵΪweight
	if (v1 < 0 || v1 >= g->Vertices.size || v2 < 0 || v2 >= g->Vertices.size) {
		printf("����v1��v2Խ�磡\n");
		return;
	}
	g->edge[v1][v2] = weight;
	g->numOfEdges++;//������һ
}

//ɾ���ߣ���ɾ��һ������߿�ͨ������ͨɾ����������ߴ��棬ʵ��˫��ɾ��
void DeleteEdge(AdjMGraph* g,int v1,int v2) {
	if (v1 < 0 || v1 >= g->Vertices.size || v2 < 0 || v2 >= g->Vertices.size||v1==v2) {
		printf("����v1��v2����\n");
		return;
	}
	if (g->edge[v1][v2] == MaxWeight) {
		printf("�ñ߲����ڣ�\n");
		return;
	}
	g->edge[v1][v2] = MaxWeight;
	g->numOfEdges--;//������һ
}

//ȡ��һ���ڽӶ��㣬
//���ڽӾ����У�����v�ĵ�һ���ڽӶ��������ڽӾ�����v���ڵ���
//�ӵ�һ������Ԫ�ؿ�ʼ�ķ�0�ҷ������Ķ���
//�ɹ����ض�����ţ�ʧ�ܷ���-1
int GetFristVex(AdjMGraph g,int v) {
	int col;//�б꣬����vΪ�б�
	if (v<0||v>=g.Vertices.size) {
		printf("����vԽ�磡"); 
		return -1;
	}
	for (col = 0; col < g.Vertices.size; col++) {
		if (g.edge[v][col] != 0 && g.edge[v][col] != MaxWeight) {
			return col;
		}
	}
	return -1;
}

//ȥ��һ���ڽӶ���
//�����ڽӾ�����˵��v1���ڽӶ���v2���¸��ڽӶ��㣬
//�ڵ�v���дӵ�v2+1������Ԫ�ؿ�ʼ��0�ҷ������Ķ���
//�ɹ����ض�����ţ�ʧ�ܷ���-1
int GetNextVex(AdjMGraph g,int v1,int v2) {
	int col;
	if (v1 < 0 || v1 >= g.Vertices.size || v2 < 0 || v2 >= g.Vertices.size) {
		printf("����v1��v2Խ�磡\n");
		return -1;
	}
	for (col = v2 + 1; col < g.Vertices.size; col++) {//col��ʼΪv2+1
		if (g.edge[v1][col] != 0 && g.edge[v1][col] != MaxWeight) {
			return col;
		}
	}
	return -1;
}