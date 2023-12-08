#include<iostream>
#include<vector>
using namespace std;

//using extra array time complexity o(n)
string sort(string s){
    vector<int>alpha(26,0);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        char ch='a'+i;
        while(alpha[i]){
            ans+=ch;
            alpha[i]--;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<"Sorted string: "<<sort(s);
    
    return 0;
}