#include<iostream>
#include<algorithm>
#include<string>
#include"StringEncryption.h"
#define NUM 100
using namespace std;
bool cmp(string p, string q) {
	if (p.size() != q.size())
		return p.size() < q.size();
	return p < q;
}
//�ַ�����������ʹ�ַ��������ַ�������Ϊ�ؼ�������
int main() {
	int num, k_len = 0, t;
	int key[NUM] = {};
	//��ʼ����Կ����
	cout << "Please input the number of strings:";
	cin >> num;
	cout << "Please input the keys(end with -1):\n";
	while (cin >> t) {
		if (t == -1)
			break;
		key[k_len++] = t;
	}
	//������Կ������
	cout << "Please input the strings:\n";
	string* str = new string[NUM];
	//����ռ����ַ���
	for (int i = 1; i <= num; i++) {
		cin >> *(str + i);
	}
	sort(str, str + num, cmp);
	//���ַ��������Զ�������
	cout << "The sorted strings:\n";
	for (int i = 1; i <= num; i++) {
		cout << *(str+i) << "\n";
	}
	cout << "The encrypted strings:\n";
	for (int i = 1; i <= num; i++) {
		encryption(str+i, key, k_len);
		for (int j = 0; j < (str + i)->size(); j++) {
			cout.fill('0');
			cout.width(2);
			cout << hex << int((*(str + i))[j]);
			//��ʮ������������ܺ���ַ���
		}
		cout << "\n";
	}
	cout << "The decrypted strings:\n";
	for (int i = 1; i <= num; i++) {
		decryption(str+i, key, k_len);
		cout << *(str+i) << "\n";
	}
	return 0;
}