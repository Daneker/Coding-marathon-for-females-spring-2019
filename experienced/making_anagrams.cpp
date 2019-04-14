#include <map>
int makingAnagrams(string s1, string s2) {
    map<char, int> freq;
    for(int i = 0; i < s1.size(); i++){
        freq[s1[i]]++;
    }
    
    for(int i = 0; i < s2.size(); i++){
        freq[s2[i]]--;
    }
    int ans = 0;
    for(auto& element : freq){
        ans += abs(element.second);
    }
    return ans;
    

}
