#include <iostream>
using namespace std;

int main() {
	int a; //number of stones at the start
	int b; //number of stones left at the end

	cin >> a;

	b = a%2;

	if (b == 0){
		cout << "Bob" << endl;
	}
	if(b == 1){
		cout << "Alice" << endl;
	}
	return 0;
}
