#include<iostream>

using namespace std;
struct Node{
	int val;
	Node * next;
	Node(int val): val(val), next(NULL){};
};

void removedulicate(Node* head)
{
	if(head == NULL)
		return;
	Node * current;
	Node * pre;
	Node * check;
	current = head;

	while(current != NULL)
	{
		int val = current->val;	
		check = current->next;
		pre = current;
		while(check!= NULL)
		{
			if(val == check->val)
			{
				Node * temp = check;
				pre->next = check->next;
				check = check->next;
				delete temp;
			}
			else
			{
				pre = check;
				check = check->next;
			}
		}
		current = current->next;
	}
}

void print(Node*head){
	while(head != NULL)
	{
		cout<<head->val<<" ";
		head = head->next;
	}
}
//
//int main()
//{
//	Node *head = new Node(1);
//	head->next = new Node(2);
//	head->next->next = new Node(1);
//	head->next->next->next = new Node(3);
//	head->next->next->next->next = new Node(2);
//	print(head);
//	cout<<endl;
//	removedulicate(head);
//	print(head);
//	return 0;
//}