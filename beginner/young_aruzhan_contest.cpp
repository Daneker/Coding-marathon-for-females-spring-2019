#include <iostream>
#include <algorithm>

using namespace std;

int binpow(int a, int n) {
    if(n == 0) 
        return 1;
    if(n % 2 == 1)
        return (binpow(a, n-1) * a) % 10;
    else {
        int b = binpow(a, n/2);
        return (b * b) % 10;
    }

}

int main(){
	long long n;
    cin >> n;
    int a = 8; 
    cout << binpow(8, n);
    return 0;
}