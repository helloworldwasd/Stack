#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<assert.h>
struct stack {
	int* p;       //����������п��ٵĿռ��ָ��
	int top;     //��¼ջ��
	int max;  //��¼Stack���������
};
typedef struct stack sk;
//˳���ʵ��
//ʵ��Stack�ĳ�ʼ������ջ����ջ������ջ����Ԫ��,�ж��Ƿ�Ϊ�գ�����ջ�ĳ��ȣ�����ջ���Լ�˳��������(����ջʱ���)
void Stackini(sk* s);
void Pushstack(sk* s,int n);
void Outstack(sk* s);
int Stacktop(sk* s);
int Judge(sk* s);
int Size(sk* s);
void Destroy(sk* s);
void print(sk* s);