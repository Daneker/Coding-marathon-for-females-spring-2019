#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m;
    cin >> n >> m;
    vector<int> debst(n + 1);
    
    for(int i = 0; i < n + 1; i++) debst[i] = 0;
    
    for(int t = 0; t < m; t++){
        int a,b,money;
        cin >> a >> b >> money;
        debst[a] -= money;
        debst[b] += money;
    }
    
    int ans = 0;
    for(int i = 0; i < debst.size(); i++){
        if(debst[i] > 0) ans += debst[i];
    }
    cout << ans;
    return 0;
}
