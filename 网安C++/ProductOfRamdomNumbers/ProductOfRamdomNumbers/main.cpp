#include<iostream>
#include<random>
#include<ctime>
using namespace std;
const int MAX = 100;
//��ֹ���������
unsigned long long Generate(int depth) {
	if (!depth) {
		return 1;
	}
	//�ݹ����
	unsigned long long ret = 1;
	ret *= (rand()%MAX);
	ret *= Generate(depth - 1);
	return ret;
}
int main() {
	int num = 0;
	srand(time(nullptr));
	//����ݹ���Ȳ���ʼ�����������
	cout << "Please input the number of the depth ";
	cin >> num;
	if (num <= 0) {
		cout << "Invalid number" << endl;
	}
	//���еݹ����Ϊ�������������
	else {
		cout <<"The product of the number is " << Generate(num) << endl;
	}
	return 0;
}