#include<iostream>
using namespace std;
int main()
{
	int* p, value;
	value = 123;
	p = &value;
	delete p;
	//不能在这里使用delete 这不是new创造出来的
	return	value;
}



