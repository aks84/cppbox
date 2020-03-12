#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};


class LinkList
{
public:
	Node* head, * tail;

	LinkList();
	~LinkList();
	void InsertVal();
	void DisplayVal();
	
};

LinkList::LinkList()
{
	head = NULL;
	tail = NULL;
}

LinkList::~LinkList()
{
}

void LinkList::InsertVal() {
// ===========================
	int num, val1; 
	cout << "Please Enter length of list: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter Value #" << i+1 << ": ";
		cin >> val1;
// ======================
		Node* temp;
		temp = new Node;
		temp->data = val1;
		temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;

	}
	else {
		tail->next = temp;
		tail = tail->next;
		
	}
// ========================
	}

};

void LinkList::DisplayVal() {
	Node* temp = head;

	cout <<"\nLinked List Values are:\n\n";
	while (temp != NULL)
	{
		cout <<"| " <<temp->data <<" |"<< " -> ";
		temp = temp->next;
	}

	cout << endl;
	
};



int main() {

	LinkList ll;
	ll.InsertVal();
	ll.DisplayVal();

	return 0;
}