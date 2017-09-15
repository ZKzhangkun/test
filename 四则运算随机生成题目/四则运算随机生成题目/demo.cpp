//2015年3月6日，30道四则运算
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void yunsuan()
{
	int x=0, y=0, n=0, d;
	int z;

	int daan[100];
	int score = 0;
	srand(time(NULL));
	cout << "需要多少计算式？" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		z = rand() % 4;
		x = rand() % 10;
		y = rand() % 10;
		switch (z)
		{

		case 0:
			cout << i + 1 << "," << x << "+" << y << "="<<endl;
			daan[i] = x + y;
			break;
		case 1:
			cout << i + 1 << "," << x << "-" << y << "=" << endl;
			daan[i] = x - y;
			break;
		case 2:
			cout << i + 1 << "," << x << "*" << y << "=" << endl;
			daan[i] = x *y;
			break;
		case 3:
			if (y != 0)
			{
				cout << i + 1 << "," << x << "/" << y << "=" << endl;
				daan[i] = x / y;
			}
			else
			{
				i = i - 1;
			}

			break;
			if ((i + 1) == n)
			{
				cout << endl;
			}
		}
	}
		for (int i = 0; i < n; i++)
		{
			cout << "请输入答案：" << endl;
			cin >> d;
			if (d == daan[i])
			{
				cout << "回答正确" << endl;
				cout << endl;
				score = score + 1;
			}
		}
	
	cout << "分数为：" << score <<endl;
}
int main()
{
	yunsuan();
	int k;
	cout << "是否继续答题？(1:继续，0:退出)" << endl;
	cin >> k ;
	if (k == 1)
	{
		cout << endl;
		main();
	}
	else {
		cout << endl;
		return 0;

	}
	return 0;
}
	