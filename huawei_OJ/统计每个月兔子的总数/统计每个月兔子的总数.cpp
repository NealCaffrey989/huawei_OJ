// 统计每个月兔子的总数.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int getTotalCount(int monthCount){
	if (monthCount <= 2)
		return 1;
	else
		return getTotalCount(monthCount - 1) + getTotalCount(monthCount - 2);
}

void main(){
	int monthCount;
	cin >> monthCount;
	cout << getTotalCount(monthCount) << endl;
	system("pause");
}


