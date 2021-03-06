#include <iostream>
using namespace std;


const int STACK_SIZE=10;

template<typename T>
class Stack ;
{
	T data_[STACK_SIZE]
	int top_;

public :
	Stack()	
	{
		top_=0;
	}
	bool empty() {
		return top_==0
	}
	bool full() {
		return top_==STACK_SIZE;
	}
	void push() {
		if(full()) {
			throw StackError();
		}
		return data_[--top_];	
	}
};

int main()
{
	Stack<int>st1;
	Stack<double>st2;
	
	cout<< "st1.empty()="<< st1.empty() << endl;
	cout<< "st2.empty()="<< st2.empty() << endl;
	
	for(int i=0; i < 10; i++){
		st1.push(i);
		st2.push(i*11.11);
	}	
	
	while(! st1.empty()) {
		cout<< "st1:"<< st1.pop() << "st2:"<< st2.pop() << endl;
	}
	return 0;
}
