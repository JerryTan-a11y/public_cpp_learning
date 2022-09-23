#include<iostream>
using namespace std;
int main()
{
	int* p;
	p = new int;
	if (p == NULL)
	{
		cout << "傻了吧，没分配成功" << endl;
	}
	else
	{
		*p = 15;
		cout << p << endl << *p << endl;
		delete p;
	}

	int* q;
	q = new int(100);
	cout << *q << endl;
	return 0;
}