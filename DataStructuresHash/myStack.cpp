#include "myStack.h"
#include <iostream>
#include <string>

void myStack::push(std::string thisData)
{
	stackNode* sNode = new stackNode;
	sNode->data = thisData;

	if (head == top)
	{
		head->next = sNode;
		sNode->previous = head;
	}

	else
	{
		top->next = sNode;
		sNode->previous = top;
	}
	top = sNode;
}



void myStack::pop()
{
	if (!isEmpty())
	{
		top = top->previous;
		delete top->next; //return to storage
	}

	else
		std::cout << "Stack empty. Can't pop" << std::endl;
}



stackNode* myStack::getTop()
{
	return top;
}



bool myStack::isEmpty()
{
	if (top == head)
		return true;
	else
		return false;
}

void myStack::print()
{
	stackNode* temp = head;
	std::cout << temp->data << std::endl;
	while (temp != top)
	{
		temp = temp->next;
		std::cout << temp->data;
	}
}
