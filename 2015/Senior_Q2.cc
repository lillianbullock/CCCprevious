// 2015//s2

#include <iostream>
#include <vector>

using namespace std;

int main() {
	long j, a, sum = 0;
	
	cin >> j;
	cin >> a;
	
	char jersey[j]; //array
	
	for (int x = 0; x < j;x++) {
		cin >> jersey[x];
	}
	
	for (int y = 0; y < a; y++) {
		char siz;
		long num; 
		cin >> siz >> num; //input desired number and size
		
		if (jersey[num] == 76 && siz == 76) { //if size of that jersey is L and desired size is L
			jersey[num] = 88;
			sum ++;
		}
		
		else if (jersey[num] == 77 /* or jersey[num] = "L"*/ && siz == 77 ) {
			jersey[num] = 88;
			sum ++;
		}
		
		else if (jersey[num] == 76 && siz == 77) {
			jersey[num] = 88;
			sum ++;
		}
		
		
		else if (jersey[num] != 88 && siz == 83) { //if jersey is not taken and desired size is S
			jersey[num] = 88;
			sum ++;
		}
	}
	
	cout << sum << endl;
		
	return 0;
}
