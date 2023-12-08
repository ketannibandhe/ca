#include<iostream>
#include<string>
using namespace std;

void rotate_clockwise(string &str1){
    int n=str1.size();
    char ch=str1[n-1];
    int index=n-2;
    while(index>=0){
        str1[index+1]=str1[index];
        index--;
    }
    str1[0]=ch;
    // cout<<str1<<endl;
}

void rotate_anticlockwise(string &s){
    int n=s.size();
    char ch=s[0];
    int index=1;
    while(index<n){
        s[index-1]=s[index];
        index--;
    }
    s[n-1]=ch;
    // cout<<s<<endl;
}
int main(){
    string str,s1,s2;
    cin>>str;
    cout<<str<<endl;
    s1=str;
    rotate_clockwise(s1);
    rotate_clockwise(s1);
    cout<<s1<<endl;

    s2=str;
    rotate_anticlockwise(s2);
    rotate_anticlockwise(s2); 
    cout<<s2<<endl;  

    return 0;}