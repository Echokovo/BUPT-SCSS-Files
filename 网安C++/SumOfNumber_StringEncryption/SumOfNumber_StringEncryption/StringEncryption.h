#include<string>
using namespace std;
/*
string s -�������ַ���
int n -����ƫ����
*/
inline string StrEncry(string s, int n) {
	string ret;
	for (int i = 0; i < s.size(); i++) {
		ret += (s[i] + n) % 128;
	}
	return ret;
}