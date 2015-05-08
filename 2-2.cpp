#include<iostream>
using namespace std;

struct Node
{
	int val;
	Node * next;
	Node(int val): val(val), next(NULL){};
};

int n = 5;
void findNthtoLast(Node * head)
{
	if(head == NULL)
		return;
	findNthtoLast(head->next);
	if(n == 1) cout<<head->val<<endl;
	n--;
}

Node*findNthtoLast2(Node * head, int n)
{
	Node*p1, *p2;
	p1 = head;
	p2 = head;
	for(int i = 0; i < n; i++)
		p1 = p1->next;
	cout<<p1->val<<endl;
	while( p1 != NULL)
	{
		p2 = p2->next;
		p1 = p1->next;
	}
	return p2;
}
//
//int main()
//{
//	Node * head = new Node(5);
//	head->next = new Node(4);
//	head->next->next = new Node(3);
//	head->next->next->next = new Node(2);
//	head->next->next->next->next = new Node(1);
//	cout<<findNthtoLast2(head,3)->val<<endl;
//	return 0;
//}