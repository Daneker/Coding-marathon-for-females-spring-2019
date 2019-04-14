#include <bits/stdc++.h>
using namespace std;
bool can(int n)
{
  if (n < 0)
    return false;
  else if (n == 0)
    return true;
  else
    return (can(n-3) || can(n-7));
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  for(int i=0;i<n;i++){

  if (can(a[i]))
    cout << "YES"<<endl;
  else 
    cout << "NO"<<endl;
}
  return 0;
}
