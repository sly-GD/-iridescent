#include"stdio.h"
#include"string.h"
typedef char DataType;
#define MaxStackSize 100
#include"seqstack.h"

int main() {
	char a[] = "ABCDEFEDCBA";
	char b[] = "ABCCBA";
	char c[] = "FDSSDD";
	int n = strlen(a);
	int n1 = strlen(b);
	int n2 = strlen(c);
	Palindrome(a,n);
	printf("\n");
	Palindrome(b, n1);
	printf("\n");
	Palindrome(c, n2);
	return 0;
}

int  Palindrome(char exp[], int n) {
	SeqStack mystack;
	int i,j;
	char c;
	 int mid = n / 2;
	 StackInitiate(&mystack);
	for(i = 0; i < n/2; i++ ) {
		printf("进栈的：%c  \n",exp[i]);
		StackPush(&mystack, exp[i]);

	}
		if (StackNotEmpty(mystack)) {
			if (n%2==1)
			{
				mid++;
				for (j = 0; j < n / 2; j++) {
					StackPop(&mystack, &c);
					if (c == exp[mid + j])
						printf("比对成功！\n");
					else{
						printf("比对失败\n"); printf("该序列不是回文序列、\n"); break;
				}
					if (!StackNotEmpty(mystack))
						printf("是回文序列\n");
				}
				
			}
			else {
				for (j = 0; j < n / 2; j++) {
					StackPop(&mystack, &c);
					if (c == exp[mid + j])
						printf("比对成功！\n");
					else {
					printf("比对失败\n"); printf("该序列不是回文序列、\n"); break;
				}
					if (!StackNotEmpty(mystack))
						printf("是回文序列\n");
				}
			}
		}
	
		return 0;
	}


