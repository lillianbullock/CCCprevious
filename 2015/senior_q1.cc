// 2015//s1

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	vector<int> vec;
	
	cin >> num;
	
	for (int c = 0; c < num; c++) {
		int x;
		cin >> x;
		
		if (x == 0) {
			vec.pop_back();
		}
		
		else {
			vec.push_back(x);
		}
	}

	int sum = 0;
	while (vec.size() > 0) {
		int x = vec.back();
		sum = sum + x;
		vec.pop_back();
	}

	cout << sum << endl;

	// your code goes here
	return 0;
}
