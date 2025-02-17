#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int cnt=1;
	int sum=0;
	string str;
	for (int i = 0; i < num; ++i) {
		cin >> str;
		sum = 0;
		cnt = 1;
		for(int i=0; i<str.size(); ++i){
			if (str[i] == 'O') {
				sum += cnt;
				cnt++;
			}
			else {
				cnt = 1;
			}
		}
		cout << sum << "\n";
	}


	return 0;
}