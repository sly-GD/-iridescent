#include"stdio.h"
#include"string.h"
#include"malloc.h"
#include"dstring.h"
#define _CRT_SECURE_NO_WARNINGS
#define max 50
int main() {
	DString s;
	int a,i;
	char ch, * c;
	do {
		printf("Please enter a string:  ");
		char array[max] = { '0' };
		fgets(array,max,stdin);
		a = strlen(array);
		//printf("%d\n", a);
		Initiate(&s, a, array);
		printf("Please enter a character to delete:  ");
		scanf("%c", &ch);
		DeleteACharacter(s, ch);

		s.str[s.length - 1] = '\0';//抹去字符串最后一个字符
			printf("Come out:  ");
		for (i = 0; i < s.length; i++)
			printf("%c", s.str[i]);
		printf("\n");
	} while (printf("Enter 1 to continue and 0 to end: ") 
		&& scanf("%d", &a) && getchar()&&printf("\n") && a != 0);
	return 0;
}

//删除s中第一个ch
int DeleteACharacter(DString s,char ch1) {
	
		Delete(&s, inquire(s.str, ch1), 1);
	
	
	return 0;
}

int inquire(char a[],char c){
	int i;
	for (i = 0; i < strlen(a); i++) {
		if (a[i] == c)
			return i;
	}
}