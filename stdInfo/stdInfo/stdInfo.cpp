// stdInfo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include"admin.h"
#include<iostream>

using namespace std;
int main()
{
	while (true)
	{
		media();
		int key;
		cin >> key;
		switch (key)
		{
		case 1:
			addInfo();
			while (true)
			{
				cout << "输入Y继续添加数据;输入N结束数据输入!\n";
				char flag;
				cin >> flag;
				if (flag == 'N')
					break;
				else
					addInfo();
			}
			cout << "数据添加完成，请选择接下来的操作!\n" << endl;
			break;
		case 2:
			showAll();
			break;
		case 3:
			modify();
			break;
		case 4:
			del();
			break;
		case 5:
			search();
			break;
		case 6:
			sort();
			break;
		case 0:
			cout << "退出系统！谢谢使用！\n" << endl;
			exit(0);
		}
	}

    return 0;

}

