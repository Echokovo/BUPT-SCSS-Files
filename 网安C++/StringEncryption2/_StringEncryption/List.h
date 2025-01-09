#include<string>
using namespace std;
class Encryption;
class node {
public:
	string str;
	node* next;
	node(string str, node* next) {
		this->next = next;
		this->str = str;
	}
	//���캯���Ա��ʼ��
};
class list {
	node* head;
public:
	list() {
		head = NULL;
	}
	void insert();
	void output();
	void hex_output();
	friend class Encryption;
	//ʹ����Ԫ��ʹhead�ܱ�Encryption���ں�������
};
void list::insert() {
	string input;
	node* p;
	node* tail = head;
	cin >> input;
	while (input != "#") {
		p = new node(input, NULL);
		if (head==NULL)
			head = tail = p;
		else
			tail->next = p, tail = p;
		cin >> input;
	}
	//β�ڵ���뷨������������
}
void list::output() {
	node* p = head;
	while (p) {
		cout << p->str << "\n";
		p = p->next;
	}
}
void list::hex_output() {
	node* p = head;
	while (p) {
		for (int i = 0; i < p->str.size(); i++) {
			cout.fill('0');
			cout.width(2);
			cout << hex << int(p->str[i]);
		}
		//��16�����������
		cout << "\n";
		p = p->next;
	}
}