#include<iostream>
#ifndef Calculation_H
#define Calculation_H
#include"Calculation.h"
#endif
//��ֹ�ظ�����ͷ�ļ�
using namespace std;
extern int NumOfStudent;
int main() {
	cout << "Please input the information of students using the form of \"Name Chinese Math English\"\nYou can end with \"#\"\n";
	while (cin >> s[NumOfStudent].Name) {
		if (s[NumOfStudent].Name == "#")
			break;
		//����#ʱ��������
		cin >> s[NumOfStudent].Chinese >> s[NumOfStudent].Math >> s[NumOfStudent].English;
		NumOfStudent++;
		//ѧ����������
	}
	if (NumOfStudent <= 0)
		cout << "Invalid input";
	//��������Է�����ƽ���ɼ�ʱ���ַ�ĸΪ������
	else {
		cout << "Chinese\nAverage Grade|Maxium Grade|Minium Grade\n";
		cout << GetAverageGrade1() << "         " << GetMaxGrade1() << "         " << GetMinGrade1() << "\n";
		cout << "Math\nAverage Grade|Maxium Grade|Minium Grade\n";
		cout << GetAverageGrade2() << "         " << GetMaxGrade2() << "         " << GetMinGrade2() << "\n";
		cout << "English\nAverage Grade|Maxium Grade|Minium Grade\n";
		cout << GetAverageGrade3() << "         " << GetMaxGrade3() << "         " << GetMinGrade3();
	}
	return 0;
}