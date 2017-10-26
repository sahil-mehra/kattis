#include <iostream>
using namespace std;
int main(){
	int h; //time in hours
	int m; //time in minutes
	int a; //new time in hours
	int b; //new time in minutes
	cin >> h >> m;
	if(m >= 45){
		a = h;
		b = m - 45;
	}
	if(m < 45){
		if(h == 0){
			a = 23;
		}
		else{
			a = h - 1;
		}
		b = 60 - (45 - m);
	}
	cout << a << " " << b << endl;
	return 0;
}
