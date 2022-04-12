#include"head.h"
void Stackini(sk* s) {   //Stack�ĳ�ʼ��
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
	if (s->top == s->max) {  //ջ���ﵽ����
		sk* t=(sk*)realloc(s->p, (s->max) * 2 * sizeof(int));   //����
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
	//assert(s->top != 0);  //���ʽΪ��ʱ����
	s->top--;
}
int Stacktop(sk* s) {  //����ջ����Ԫ��
	assert(s);
	if (s->top == 0) {
		printf("Stack is NULL\n");
		exit(-1);
	}
	return s->p[s->top - 1];  //s->p[s->top]ָ��ѿ��ٿռ������Ԫ�ص���һ��Ԫ��
}
int Judge(sk* s) {  //�ж�ջ�Ƿ�Ϊ��
	if (s->top == 0) {
		return 1;
	}
	return 0;
}
int Size(sk* s) {
	return s->top; 
}
void Destroy(sk* s) {   //����
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