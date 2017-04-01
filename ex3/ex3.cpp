#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
# define EOF  (:)
#if 0

int main()
	{
		string sLine;
		getline(cin,sLine,':');
		cin.ignore();
		int b= sizeof(sLine)/5;
		int a = 0;
		for (int i = 0; i < b; i++)
		{
			 a  =a + sLine[i];
		}
		a = a - 5 * 48;
		cout << "your string is:\n" << sLine << endl;
		cout << a <<endl << sLine.length() ;
		return 0;
	}


#endif

#if 1
int main()
{
	char str[5]; 
	int n=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < 5; i++)
	{
		n += str[i];
	}
	cout << n-5*48;
	return 0;
}

#endif




#if 0
int main()
{
	char str[5][1001];
	int k[5], t = 0;
	for (int i = 0; i<5; i++)
	{
		cin >> str[i];
		k[i]=strlen(str[i]);
		if(k[i]>t)
		{
			t=k[i];
		}
	}
	for(int i=0;i<5;i++)
	{
		if(t==k[i])
			cout << str[i];
	}
	printf("\n");

	return 0;
}
#endif

#if 0
int main()
{
	int row;
	int	col = 5;
	int** x;
	int data;
	cin >> data;
	row = sizeof(data) / 5;
	x = new int*[row];
	for (int i = 0; i < row; i++)
		x[i] = new int[5];

	int i, j;      //循环控制

	for (i = 0; i < row; i++)        //输入数据
		for (j = 0; j < 5; j++)
			cin >> x[i][j];

	for (i = 0; i < row; i++)        //将数组中的元素全部输出
		for (j = 0; j < 5; j++)
			cout << x[i][j] << " ";

	return 0;
}
#endif