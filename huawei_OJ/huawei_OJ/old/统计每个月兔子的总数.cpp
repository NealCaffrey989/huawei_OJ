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
	cout << getTotalCount(n) << endl;
}
