#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getNext(int n){
    int result = 0;
    while(n){
        result += (n % 10) * (n % 10);
        n = n / 10;
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int slow = n;
    int fast = getNext(n);
    
    while(slow != fast){
        slow = getNext(slow);
        fast = getNext(fast);
        fast = getNext(fast);
        if(fast == 1){
            cout << "True";
            return 0;
        }
    }
    
    if(fast != 1)
        cout << "False";
    else
        cout << "True";
    
    return 0;
}
