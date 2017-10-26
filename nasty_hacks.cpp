#include <iostream>
using namespace std;

int main(){
	int n; //Number of lines
	int r; // Expeced revenue if NOT advertising
	int e; // Expected revenue if advertising
	int c; // Cost of Advertising
	int i; // for loop
	cin >> n;

	for(i = 0; i < n; ++i){
		cin >> r >> e >> c;
		if( (e - c) > r){
			cout << "advertise" << endl;
		}
		else if( (e - c) == r){
			cout << "does not matter" << endl;
		}
		else{
			cout << "do not advertise" << endl;
		}
	}

	return 0;
}
