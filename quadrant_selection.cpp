#include <iostream>
using namespace std;
int main(){
	int x;// x-coordinate
	int y;// y-coordinate
	cin >> x >> y;
	if(x > 0){
		if(y > 0){
			cout << "1\n";
		}
		if(y < 0){
			cout << "4\n";
		}
	}
	if(x < 0){
		 if(y > 0){
                        cout << "2\n";
                }
                if(y < 0){
                        cout << "3\n";
                }
	}
	return 0;
}
