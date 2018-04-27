#include "stdafx.h"
#include<iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList orgnal_list; //listを定義
	
	//作成したリストに値を追加する
	orgnal_list.createNode(25);
	orgnal_list.createNode(50);
	orgnal_list.createNode(90);
	orgnal_list.createNode(40);
	orgnal_list.display_list();

	//リストの途中に値を追加	
	orgnal_list.insertNode(2, 60);
	orgnal_list.display_list();
	
	//末端のリストを削除
	orgnal_list.deleteTailNode();
	orgnal_list.display_list();

	//リストの途中の値を削除
	orgnal_list.deleteSpecifiedNode(4);
	orgnal_list.display_list();
	return 0;
}

