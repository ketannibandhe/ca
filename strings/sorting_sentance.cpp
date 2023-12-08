#include<iostream>
#include<vector>
using namespace std;

string sortSentence(string &s) {
        string ans="";
        string str;
        vector<string>pos(10);
        int position;
        int index=0;
        int count=0;
        while(index<s.size()){
            if(s[index]!='_')
                str+=s[index];
            else
                // position=str[index-1]-'0';
                position=str[str.size()-1]-'0';
                str.pop_back();
                pos[position]=str;
                str.clear();
                count++;
                
            index++;
        }

        //this is written to include last word
        position=str[str.size()-1]-'0';
        str.pop_back();
        pos[position]=str;
        str.clear();
        count++;
        for(int i=0;i<=count;i++){
            ans+=pos[i];
            ans+=' ';
        }
        ans.pop_back();
    return ans;
    }

int main(){
    string s;
    cin>>s;
    string last =sortSentence(s);
    cout<<last;
    // s.pop_back();
    // cout<<s;
    return 0;}