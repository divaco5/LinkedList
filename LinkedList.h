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

	//コンストラクタ、デストラクタ
	LinkedList();
	~LinkedList();

	//連結リスト機能
	//作成・追加する
	void createNode(int);	
	void prependNode(int);
	void insertNode(int, int);

	//削除する
	void deleteHeadNode();
	void deleteTailNode();
	void deleteSpecifiedNode(int);
	
	//表示する
	void display_list();
};

