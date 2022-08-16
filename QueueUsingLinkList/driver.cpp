#include<iostream>
using namespace std;
#include"Queue.h"


int main()
{
	Queue<int> q;
	for (int i = 0; i < 5; i++)
		q.enQueue(i);
	try
	{
		for (int i = 0; i < 6; i++)
			cout << q.deQueue() << " ";
	}
	catch (string str)
	{
		cout << str;
	}
	return 0;
}