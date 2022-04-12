#include"head.h"
int main() {
	sk s;    //创建栈
	Stackini(&s);  //初始化
	//入栈
	Pushstack(&s, 1);
	Pushstack(&s, 2);
	Pushstack(&s, 3);
	Pushstack(&s, 4);
	Pushstack(&s, 5);
	//出栈
	Outstack(&s);
	//打印
	print(&s);
	printf("\n栈顶元素为:%d\n", Stacktop(&s));
	printf("长度为 %d\n", Size(&s));
	return 0;
}