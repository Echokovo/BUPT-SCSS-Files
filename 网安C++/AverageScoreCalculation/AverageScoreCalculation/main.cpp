#include<iostream>
using namespace std;
int main() {
	double Score[3] = {}, TotalScore = 0;
	//��������ѧ���ĳɼ���ɼ���
	cout << "Please input the scores of the students:";
	for (int i = 0; i <= 2; i++) {
		cin >> Score[i];
		TotalScore += Score[i];
		//ѭ�������ѧ���ɼ������
	}
	cout << "The average score of the three students is " << TotalScore / 3 << endl;
	//�������ѧ����ƽ���ɼ�
	return 0;
}