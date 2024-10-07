#include <iostream>
#include <vector>
using namespace std;

//벡터는 동적 배열의 형태
// 이런게 있다 ~ *******실행은 안됨*********
int main() {
	vector<int> A; //선언

	A.push_back(1); //마지막에 추가
	A.insert(A.begin(), 7); //앞에 7추가
	A.insert(A.begin() + 2, 10); //index 2위치에 10 삽입

	A[4] = -5; //값 변경

	A.pop_back(); //마지막 값 삭제
	A.erase(A.begin() + 3); //index 3위치의 값 삭제


	A.size(); //데이터 개수
	A.front(); //처음 값
	A.back(); //마지막 값
	A[3]; //index 3에 위치하는 값
	A.at(5); //index 5에 위치하는 값
	A.begin(); //첫번째 데이터 위치
	A.end(); //마지막 데이터 다음 위치

	A.clear(); //모든 값 삭제


	return 0;
}