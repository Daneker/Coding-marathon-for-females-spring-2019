#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;



int main(){
  int n;
  cin >> n;
  vector<unsigned long int> vect(n);

  for(int i = 0; i < n; i++){
    cin >> vect[i];
  }



  unordered_map<unsigned long int, vector<unsigned int>> nxor;
  unsigned long int res = vect[0];
  nxor[res].push_back(0);
  nxor[res].push_back(0);
  nxor[res][0]++;
  for(int i = 1; i < n; i++){
    res ^= vect[i];
    if (nxor[res].size() != 2){
      nxor[res].push_back(0);
      nxor[res].push_back(0);
    }
    nxor[res][i & 1]++;
  }


  long long ans = 0;
  for(auto el : nxor){

    vector<unsigned int> temp = el.second;
    long long evens = (long long)(((long long)(temp[0]) * ((long long)(temp[0]) - (long long)(1))) / (long long)(2));
    long long odds = (long long)(((long long)(temp[1]) * ((long long)(temp[1]) - (long long)(1))) / (long long)(2));
    ans += evens + odds;
  }
  if(nxor.find(0) != nxor.end())
      ans += (long long)(nxor[0][1]);
  cout << ans;
}
