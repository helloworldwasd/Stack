#include"head.h"
int main() {
	sk s;    //����ջ
	Stackini(&s);  //��ʼ��
	//��ջ
	Pushstack(&s, 1);
	Pushstack(&s, 2);
	Pushstack(&s, 3);
	Pushstack(&s, 4);
	Pushstack(&s, 5);
	//��ջ
	Outstack(&s);
	//��ӡ
	print(&s);
	printf("\nջ��Ԫ��Ϊ:%d\n", Stacktop(&s));
	printf("����Ϊ %d\n", Size(&s));
	return 0;
}