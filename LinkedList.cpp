#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	headNode = NULL; //0かも
	tailNode = NULL;
}


LinkedList::~LinkedList()
{
}

//ノードを作成または末尾に追加する
void LinkedList::createNode(int value)
{
	ListNodes *newNode	= new ListNodes;
	newNode->value		= value;
	newNode->next		= NULL;

	if (NULL == headNode)
	{
		headNode		= newNode;
		tailNode		= newNode;
		newNode			= NULL;
	}
	else {
		tailNode->next	= newNode;
		tailNode		= newNode;
	}
}

//先頭にノードを追加する
void LinkedList::prependNode(int value)
{
	ListNodes *newNode	= new ListNodes;
	newNode->value		= value;
	newNode->next		= headNode;
	headNode			= newNode;
}

//任意の場所にノードを追加する
void LinkedList::insertNode(int position, int value)
{
	ListNodes *preNode = new ListNodes;
	ListNodes *curNode = new ListNodes;
	ListNodes *newNode = new ListNodes;

	curNode = headNode;

	for (int i = 1; i < position; i++) {
		preNode = curNode;
		curNode = curNode->next;
	}

	newNode->value	= value;
	preNode->next	= newNode;
	newNode->next	= curNode;
}

//先頭のノードを削除する
void LinkedList::deleteHeadNode()
{
	ListNodes * newNode = new ListNodes;
	newNode				= headNode;
	headNode			= headNode->next;

	delete newNode;
}

//末端のノードを削除する
void LinkedList::deleteTailNode()
{
	ListNodes *curNode	= new ListNodes;
	ListNodes *preNode	= new ListNodes;

	curNode = headNode;

	while (curNode->next != NULL) {
		preNode = curNode;
		curNode = curNode->next;
	}

	tailNode		= preNode;
	preNode->next	= NULL;

	delete curNode;
}

//任意の場所のノードを削除する
void LinkedList::deleteSpecifiedNode(int position)
{
	ListNodes *curNode	= new ListNodes;
	ListNodes *preNode	= new ListNodes;
	curNode				= headNode;

	for (int i = 1; i < position; i++) {
		preNode = curNode;
		curNode = curNode->next;
	}

	preNode->next = curNode->next;
}

//リストを表示する
void LinkedList::display_list()
{
	ListNodes *newNode	= new ListNodes;
	newNode				= headNode;

	cout << "MyList:\t";
	while (newNode != NULL) {
		cout << newNode->value << "\t";
		newNode = newNode->next;
	}
	cout << "\n";
}
