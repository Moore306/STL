//============================================================================
// Name        : Code.cpp
// Author      : orange
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

#include <deque>
using namespace std;
int main()
{
	stack<int> S;

	S.push(1);
	S.push(2);
	S.push(3);

	cout<<S.top()<<endl;
	S.pop();
	cout<<S.top()<<endl;
	S.pop();
	cout<<S.top()<<endl;
	S.pop();
	//cout<<S.top()<<endl;
	cout<<"**************************"<<endl;
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	cout<<"size "<<que.size()<<endl;
	cout<<que.front()<<" "<<que.back()<<endl;
	cout<<que.front()<<endl;
	que.pop();
	cout<<que.front()<<endl;
	que.pop();
	cout<<que.front()<<endl;
	que.pop();

	return 0;
}
