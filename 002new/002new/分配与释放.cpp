#include<iostream>
using namespace std;
int main()
{
	int* p;
	p = new int;
	if (p == NULL)
	{
		cout << "ɵ�˰ɣ�û����ɹ�" << endl;
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