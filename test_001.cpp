
#include <iostream>

struct Node
{
	int data;
	Node* next;
};

Node* reverse(Node* head)
{
	if(head == nullptr)
		return head;

	Node* reverHead = nullptr;

	while(head != nullptr)
	{
		Node* rev = head -> next;
		head -> next = reverHead;
		reverHead = head;
		head = rev;
	}
	
	return reverHead;
}

int main()
{
	return 0;
}
