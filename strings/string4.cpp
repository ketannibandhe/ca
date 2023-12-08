//calculating the length of string without using size() operator

#include<iostream>
using namespace std;
int main(){
    int i=0,count=0;
    string s="new english school";
    while(s[i]!='\0'){
        count++;
        i++;
    }
    cout<<s<<endl;
    cout<<count<<endl;
    cout<<s.size();
    return 0;}