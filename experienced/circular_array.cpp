#include <vector>

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> rotated;
    k = k % a.size(); // in the case if k > a.size()
    for(int i = a.size() - k; i < a.size(); i++){
        rotated.push_back(a[i]);
    }
    for(int i = 0; i < a.size() - k; i++){
        rotated.push_back(a[i]);
    }
    vector<int> ans;
    for(int i = 0; i < queries.size(); i++){
        ans.push_back(rotated[queries[i]]);
    }
    return ans;

}
