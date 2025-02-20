#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

bool comp(string s1, string s2) {
    if (s1.length() == s2.length()) {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

int main() {
    set<string> strSet;
    string arr[20001];
    int num;
    cin >> num;
    string str;
    for (int i = 0; i < num; ++i) {
        cin >> str;
        strSet.insert(str);
    }

    int i = 0;
    for (auto str : strSet) {
        arr[i] = str;
        i++;
    }

    sort(arr, arr + strSet.size(), comp);

    for (int i = 0; i < strSet.size(); ++i) {
        cout << arr[i] << "\n";
    }
    return 0;
}