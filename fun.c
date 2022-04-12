#include"head.h"
void Stackini(sk* s) {   //Stack的初始化
	s->p=(sk*)malloc(sizeof(int) * 4);
	if (s->p == NULL) {
		printf("malloc error\n");
		exit(-1);
	}
	s->max = 4;
	s->top = 0;
}
void Pushstack(sk* s, int n) {  //PushStack
	assert(s);
	if (s->top == s->max) {  //栈顶达到上线
		sk* t=(sk*)realloc(s->p, (s->max) * 2 * sizeof(int));   //增容
		if (t == NULL) {
			printf("realloc error\n");
			exit(-1);
		}
		else {
			s->p = t;
			s->max *= 2;
		}
	}
	s->p[s->top] = n;
	s->top++;
}
void Outstack(sk* s) {  //OutStack
	assert(s);
	//assert(s->top != 0);  //表达式为假时报错
	s->top--;
}
int Stacktop(sk* s) {  //返回栈顶的元素
	assert(s);
	if (s->top == 0) {
		printf("Stack is NULL\n");
		exit(-1);
	}
	return s->p[s->top - 1];  //s->p[s->top]指向堆开辟空间的数组元素的下一个元素
}
int Judge(sk* s) {  //判断栈是否为空
	if (s->top == 0) {
		return 1;
	}
	return 0;
}
int Size(sk* s) {
	return s->top; 
}
void Destroy(sk* s) {   //销毁
	free(s->p);
	s->max = 0;
	s->top = 0;
}
void print(sk* s) {
	int i = 0;
	for (i = 0; i < s->top; i++) {
		printf("%d ", *(s->p+i));
	}
}