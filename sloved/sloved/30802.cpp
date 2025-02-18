#include <iostream>
using namespace std;

int main() {
	int people;
	int arr[6];
	int shirt, pen;

	cin >> people;
	for (int i = 0; i < 6; ++i) {
		cin >> arr[i];
	}
	cin >> shirt >> pen;

	int shirtGroup=0, penGroup=0, penDiv=0;

	for (int i = 0; i < 6; ++i) {
		if (arr[i] % shirt == 0) {
			if (arr[i] > 0) {
				shirtGroup += arr[i] / shirt;
			}
		}
		else {
			if (arr[i] > shirt) {
				shirtGroup += arr[i] / shirt;
			}
			shirtGroup++;
		}
	}

	penGroup = people / pen;
	penDiv = people % pen;

	cout << shirtGroup << "\n";
	cout << penGroup << " " << penDiv;

	return 0;
}