#include<iostream>
#define NUM 51
//Ԥ�����ά����Ĵ�С
using namespace std;
void ArrayInput(int _Array[][NUM], int x, int y) {
	cin >> _Array[x][y];
}
int ArrayOutput(int _Array[][NUM], int x, int y) {
	return _Array[x][y];
}
int main() {
	int Array[NUM][NUM] = {};
	//�����ά���鲢��ʼ��
	cout << "Please input the " << NUM - 1 << "*" << NUM - 1 << " array\n";
	for (int i = 1; i < NUM; i++) {
		for (int j = 1; j < NUM; j++) {
			ArrayInput(Array, i, j);
		}
	}
	//�����ά����
	for (int i = 1; i < NUM; i++) {
		for (int j = 1; j < NUM; j++) {
			cout << ArrayOutput(Array, i, j) << " ";
		}
		cout << "\n";
	}
	//�����ά����
	return 0;
}