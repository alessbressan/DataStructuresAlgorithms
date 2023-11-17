#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// where 12 is the size of the vector
	vector<int> days(12);

	for (int i = 0; i < days.size(); i++) {
		days[i] = i + 10;
	}

	for (auto x:days) {
		cout << x << "\n";
	}

	return 0;
}