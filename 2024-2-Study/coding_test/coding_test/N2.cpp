#include <iostream>
using namespace std;

int main() {
	int N = 1000;
	int cnt = 1;

	// ¿¬»ê È½¼ö = n^2
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << "¿¬»ê È½¼ö: " << cnt++ << endl;
		}
	}

	return 0;
}