#include<iostream>
#include"GetSum.h"
#include"StringEncryption.h"
#define F(a) a=(a+2)%128
using namespace std;
int main() {
	int n[10] = { 5,6,19,89,69 };
	cout <<"��ͽ��Ϊ" << GetSum(n, 4) << "\n";
	string str = "I am fine";
	cout << "�������ܽ��Ϊ" << StrEncry(str, 2) << "\n";
	for (int i = 0; i < str.size(); i++) {
		F(str[i]);
	}
	cout << "��Ԥ������ܽ��Ϊ" << str;
	return 0;
}