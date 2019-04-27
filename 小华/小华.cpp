// 小华.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char str[10];
	cout << "1.训练" << endl << "2.使用" << endl;
	cin >> str;
	int i;
	for (i = 0; i < 3; i++)
		cout << str[i];
}
