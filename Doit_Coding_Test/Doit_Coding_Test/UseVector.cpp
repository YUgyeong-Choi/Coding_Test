#include <iostream>
#include <vector>
using namespace std;

//���ʹ� ���� �迭�� ����
// �̷��� �ִ� ~ *******������ �ȵ�*********
int main() {
	vector<int> A; //����

	A.push_back(1); //�������� �߰�
	A.insert(A.begin(), 7); //�տ� 7�߰�
	A.insert(A.begin() + 2, 10); //index 2��ġ�� 10 ����

	A[4] = -5; //�� ����

	A.pop_back(); //������ �� ����
	A.erase(A.begin() + 3); //index 3��ġ�� �� ����


	A.size(); //������ ����
	A.front(); //ó�� ��
	A.back(); //������ ��
	A[3]; //index 3�� ��ġ�ϴ� ��
	A.at(5); //index 5�� ��ġ�ϴ� ��
	A.begin(); //ù��° ������ ��ġ
	A.end(); //������ ������ ���� ��ġ

	A.clear(); //��� �� ����


	return 0;
}