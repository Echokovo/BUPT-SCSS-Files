/*
int num[] -���������
int depth -��������鳤��
*/
inline long long GetSum(int num[],int depth) {
	if (depth < 0) {
		return 0;
	}
	//�ݹ���������
	return num[depth] + GetSum(num, depth - 1);
}