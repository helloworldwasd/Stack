#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<assert.h>
struct stack {
	int* p;       //用来管理堆中开辟的空间的指针
	int top;     //记录栈顶
	int max;  //记录Stack的最大容量
};
typedef struct stack sk;
//顺序表实现
//实现Stack的初始化，入栈，出栈，返回栈顶的元素,判断是否为空，返回栈的长度，销毁栈，以及顺序表的增容(在入栈时完成)
void Stackini(sk* s);
void Pushstack(sk* s,int n);
void Outstack(sk* s);
int Stacktop(sk* s);
int Judge(sk* s);
int Size(sk* s);
void Destroy(sk* s);
void print(sk* s);