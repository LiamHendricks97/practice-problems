#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	string str;
	cin >> str;
	bool ans = true;
	for (int i = 0; i < num - 1; ++i) {
		if (str[i] == 'H' && str[i + 1] == 'H') {
			ans = false;
			break;
		}
	}
	if (ans) {
		cout << "YES" << endl;
		for (char ch : str) {
			if (ch == '.') {
				cout << 'B';
			}
			else {
				cout << ch;
			}
		}
	}
	else {
		cout << "NO";
	}
}