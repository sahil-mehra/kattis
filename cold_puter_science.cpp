#include <iostream>
using namespace std;

int main(){
	int a,b,c,d = 0;
	cin >> a;
	for(b = 0; b < a; ++b){
		cin >> c;
		if(c < 0){
			++d;
		}
	}
	cout << d << endl;
	return 0;
}
