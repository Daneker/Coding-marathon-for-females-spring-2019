#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long n, a;
	cin >> n >> a;
	for(int i = 0; i < a; ++i) {
		if(n % 10) n /= 10;
		else n--;
	}
	cout << n;
	return 0;
}
