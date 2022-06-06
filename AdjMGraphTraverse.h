#pragma once
#include"AdjMGraph.h"
#include"seqcqueue.h"

//��ͨͼ��������ȷ��ʱ���
void DepthFSearch(AdjMGraph g, int v, int visited[], void Visit(DataType item)) {
	//g��vΪ��ʼ���㣬���ʺ���Visit
	//visit[]��������Ƕ����Ƿ񱻷��ʹ��ģ�0��δ���ʣ�1���ѷ��ʣ�
	int w;
	Visit(g.Vertices.list[v]);
	visited[v] = 1;
	w = GetFristVex(g,v);
	while (w!=-1) {//����visited�����Ϊ1���ݹ����
		if (!visited[w]) {
			DepthFSearch(g, w, visited, Visit);
		}
		w = GetNextVex(g, v, w);//���ö����ѷ��ʣ���wȡ�ö������һ������
	}

}

//����ͨͼ����ȷ��ʱ���
void DepthFirstSearch(AdjMGraph g, void Visit(DataType item)) {
	//��ͨͼ��ָͼ������һ�Զ��㶼����ͨ��
	int i;
	int* visited = (int*)malloc(sizeof(int)*g.Vertices.size);
	for (i = 0; i < g.Vertices.size; i++) {
		visited[i] = 0;//�������ȫ������ֵ0
	}
	for (i = 0; i < g.Vertices.size; i++) {
		if (!visited[i]) {
			DepthFSearch(g,i,visited,Visit);
		}
	}
	free(visited);
}

//��ͨͼ�Ĺ�����ȱ���
void BroadFSearch(AdjMGraph g,int v,int visited[],void Visit(DataType item)) {
	//g��vΪ��ʼ���㣬���ʺ���Visit
	//visited[]��������Ƕ����Ƿ񱻷��ʹ��ģ�0��δ���ʣ�1���ѷ��ʣ�
	int u, w;
	SeqCQueue q;
	Visit(g.Vertices.list[v]);
	visited[v] = 1;
	QueueInitiate(&q);
	QueueAppend(&q, v);
	while (QueueNotEmpty(q)) {//���γ��ӷ���������ͨ��
		QueueDelete(&q,&u);
		w = GetFristVex(g,u);
		while (w != -1) {//���������㣬�ѳ����е���������������ͨ�㶼��ӡ����������ѹ�����
			if (!visited[w]) {
				Visit(g.Vertices.list[w]);
				visited[w] = 1;
				QueueAppend(&q, w);
			}
			w = GetNextVex(g,u,w);
		}		
	}
}

//����ͨͼ�Ĺ�����ȱ���
void BroadFirstSearch(AdjMGraph g,void Visit(DataType item)) {
	int i;
	int* visited = (int*)malloc(sizeof(int) * g.Vertices.size);
	for (i = 0; i < g.Vertices.size; i++) {
		visited[i] = 0;
	}
	for (i = 0; i < g.Vertices.size; i++) {
		if (!visited[i]) {
			BroadFSearch(g, i, visited, Visit);//i��Ϊ�����㴫��ȥ
		}
	}
	free(visited);
}