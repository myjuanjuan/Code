#include"speechManager.h"
#include<iostream>
#include<ctime>
using namespace std;

int main()
{	
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建管理类对象
	SpeechManager sm;

	int choice = 0; //用来存储用户的选项

	while (true)
	{
		sm.showMenu();

		cout << "请输入您的选择：" << endl;
		cin >> choice; //接受用户的选项

		switch (choice)
		{
		case 1: //开始比赛
			sm.startSpeech();
			break;
		case 2: //查看往届比赛记录
			sm.showRecord();
			break;
		case 3: //清空比赛记录
			sm.clearRecord();
			break;
		case 0: //退出系统
			sm.exitSystem();
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}

	system("pause");

	return 0;
}