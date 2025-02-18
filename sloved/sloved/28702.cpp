#include <iostream>
using namespace std;
#include <cctype> 
#include <string>

bool isNumber(const std::string& str) {
    for (char ch : str) {
        if (!std::isdigit(ch)) {
            return false; 
        }
    }
    return true; 
}
int main() {
	string a, b, c;
	cin >> a >> b >> c;

    int num = 0;
    if (isNumber(a)) {
        num = stoi(a) + 3;
    }
    if (isNumber(b)) {
        num = stoi(b) + 2;
    }
    if (isNumber(c)) {
        num = stoi(c) + 1;
    }

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if (num % 3 == 0 && num % 5 != 0) {
        cout << "Fizz";
    }
    else if (num % 3 != 0 && num % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << num;
    }
	return 0;
}