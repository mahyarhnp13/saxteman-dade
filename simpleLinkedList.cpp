#include <iostream>

using namespace std;


struct list
{
	int num;
	list* link;
};

class linkedList
{
	list* head= NULL;

public :

	void insertAtBegin(int);
	void insertAtEnd(int);
	void insertAtIndex(int, int);
	void updateNode(int,int);
	void removeNodeAtBegin();
	void removeNodeAtEnd();
	void removeNodeAtIndex(int);
	void sizeOfList();
	void showItems();


};

void linkedList::insertAtBegin(int num)
{

	list* newNode=new list;
	newNode->num = num;
	if (head == NULL)
	{
		head = newNode;
		newNode->link = NULL;
	}
	else
	{
		newNode->link = head;
		head = newNode;
	}
}

void linkedList::insertAtEnd(int num)
{
	list* newNode = new list;

	newNode->num = num;
	newNode->link = NULL;

	if (this->head == NULL)
	{
		this->head = newNode;
	}
	else
	{
		list* temp = head;

		while (temp->link != NULL)
		{
			temp = temp->link;
		}

		temp->link = newNode;


	}
};

void linkedList::insertAtIndex(int num, int index)
{
	list* temp = head;
	int counter = 0;
	list* newNode = new list;
	newNode->num = num;


	while (counter < index )
	{

		temp = temp->link;
		counter++;
	}
	newNode->link = temp->link;
	temp->link= newNode;

}

void linkedList::updateNode(int num, int index)
{
	list* temp = head;
	int counter = 0;

	while (counter < index && temp->link!=NULL)
		{
			temp = temp->link;
			counter++;
		}

		temp->num = num;


};


int main()
{
    return 0;
}
