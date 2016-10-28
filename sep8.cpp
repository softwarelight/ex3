// sep8.cpp : 定义控制台应用程序的入口点。


#include "stdafx.h"
#include <iostream>

using std::cin;
using std::cout;

int _tmain (int argc, _TCHAR* argv[])
{
	int a=0;
	std::cout<<a<<"adada"<<std::endl;

	int *ptr1=&a;
	char b;
	cin>>b;
	cout<<b;

	////printf("adaf %d",3);

	system("pause");
	return 0;
}

