//#include"stdio.h"
//#include"malloc.h"
//#define MaxSize 20
//#define MaxVertices 20
//#define MaxEdge 100
//#define MaxWeight 1000
//typedef int DataType;
//#include"AdjMGraph.h"
//#include"AdjMGraphCreat.h"
//#include"AdjMGraphTraverse.h"
//
//void Visit(DataType item) {//������ʲ�������
//	printf("%c   ", item);
//}
//
//int main() {
//	AdjMGraph g;
//	DataType a[] = {'A','B','C','D','E'};
//	RowColWeight rcw[] = { {0,1,10},{0,4,20},{1,3,30},{2,1,40},{3,2,50} };
//	int n = 5, e = 5;//����ͼ�Ķ�����������
//	CreatGraph(&g,a,n,rcw,e);//��ͼΪ����ͨͼ
//	printf("��ȱ�����������Ϊ��");
//	DepthFirstSearch(g,Visit);
//	printf("\n��ȱ�����������Ϊ��");
//	BroadFirstSearch(g,Visit);
//	return 0;
//}