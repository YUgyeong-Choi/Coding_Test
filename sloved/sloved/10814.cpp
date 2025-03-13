#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct info {
	int order;
	int age;
	string name;
};

bool Compare(info one, info two) {
	if (one.age == two.age) {
		return one.order < two.order;
	}
	
	return one.age < two.age;
}

int main() {
	vector<info> infoVec;
	int num;
	cin >> num;
	
	for (int i = 0; i < num; ++i) {
		int age;
		string name;
		cin >> age >> name;
		info person = { i, age, name };
		infoVec.push_back(person);
	}
	
	sort(infoVec.begin(), infoVec.end(), Compare);

	for (int i = 0; i < num; ++i) {
		cout << infoVec[i].age << " " << infoVec[i].name << "\n";
	}

	return 0;
}