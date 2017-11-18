// stack using array in C++.
#include<stdlib.h>
#include<iostream>

#define MAX 100

using namespace std;

class Stack{
	int top;
public:
	int element[MAX]; //stack size
	
	Stack(){top =  -1;}
	bool push(int x);
	int pop();
};

bool Stack::push(int x){
	if(top >= MAX)
	{
		cout<< "stack overflow"<<endl;
		return false;
	}
	else
	{
		element[++top] = x;
		cout<< x<<" is pushed in stack"<<endl;
		return true;
	}
}

int Stack::pop(){
	if(top<0)
	{
		cout<<" Stack is Empty"<<endl;
		return 0;
	}
	else
	{
		int x = element[top--];
		return x;
	}
}

// testing program

int main()
{
Stack s;
s.push(10);
s.push(20);
s.push(30);
cout<<s.pop() << "poped from stack"<<endl;

return 0;
}
