#include<iostream>
using namespace std;
int main()
{
	int* p, value;
	value = 123;
	p = &value;
	delete p;
	//����������ʹ��delete �ⲻ��new���������
	return	value;
}



