#pragma once

struct ListNodes
{
	int			value;
	ListNodes	*next;
};

class LinkedList
{
private:
	ListNodes * headNode;
	ListNodes * tailNode;

public:

	//�R���X�g���N�^�A�f�X�g���N�^
	LinkedList();
	~LinkedList();

	//�A�����X�g�@�\
	//�쐬�E�ǉ�����
	void createNode(int);	
	void prependNode(int);
	void insertNode(int, int);

	//�폜����
	void deleteHeadNode();
	void deleteTailNode();
	void deleteSpecifiedNode(int);
	
	//�\������
	void display_list();
};

