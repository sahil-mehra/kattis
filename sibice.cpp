#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n; // Number of matches on the floor
	int w,h; // dimensions of the box
	int m; // length of the match;
	int i; // for loop

	cin >> n >> w >> h;
	for( i = 0; i < n; ++i){
		cin >> m;
		if( (pow(w,2) + pow(h,2)) >= pow(m,2)){
			cout << "DA" << endl;
		}
		else{
			cout << "NE" << endl;
		}
	}
	return 0;
}
