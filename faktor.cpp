#include <iostream>
using namespace std;
int main(){
	int articles_published, impact_factor;
	cin >> articles_published >> impact_factor;
	cout << (articles_published * (impact_factor - 1)) + 1 << endl;
	return 0;
}
