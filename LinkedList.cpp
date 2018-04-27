#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	headNode = NULL; //0����
	tailNode = NULL;
}


LinkedList::~LinkedList()
{
}

//�m�[�h���쐬�܂��͖����ɒǉ�����
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

//�擪�Ƀm�[�h��ǉ�����
void LinkedList::prependNode(int value)
{
	ListNodes *newNode	= new ListNodes;
	newNode->value		= value;
	newNode->next		= headNode;
	headNode			= newNode;
}

//�C�ӂ̏ꏊ�Ƀm�[�h��ǉ�����
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

//�擪�̃m�[�h���폜����
void LinkedList::deleteHeadNode()
{
	ListNodes * newNode = new ListNodes;
	newNode				= headNode;
	headNode			= headNode->next;

	delete newNode;
}

//���[�̃m�[�h���폜����
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

//�C�ӂ̏ꏊ�̃m�[�h���폜����
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

//���X�g��\������
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
