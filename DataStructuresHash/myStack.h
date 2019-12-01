#pragma once

#include <string>



struct stackNode

{
	stackNode* next;
	stackNode* previous;
	std::string data;
};



class myStack
{
private:
	stackNode* head = new stackNode;
	stackNode* top;
public:
	myStack()
	{
		top = head;
	}
	void push(std::string);
	void pop();
	stackNode* getTop();
	bool isEmpty();
	void print();
};