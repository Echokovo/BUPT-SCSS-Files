#include<string>
using namespace std;
void encryption(string* s, int key[], int k_len) {
	/*
	string* s:�������ַ���ָ��
	int key[]:��Կ����
	int k_len:��Կ���鳤��
	*/
	int s_len = s->size();
	for (int i = 0; i < s_len; i++) {
		(*s)[i] ^= key[i % k_len];
	}
}
void decryption(string* s, int key[], int k_len) {
	/*
	string* s:�������ַ���ָ��
	int key[]:��Կ����
	int k_len:��Կ���鳤��
	*/
	int s_len = s->size();
	for (int i = 0; i < s_len; i++) {
		(*s)[i] ^= key[i % k_len];
	}
}