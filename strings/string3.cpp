#include<iostream>
using namespace std;
int main(){
    string s1;
    string name="ketan nibandhe";
    cout<<name<<endl;
    name.push_back('k');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;

    cout<<"Enter a string:\n";
    cin>>s1;
    int start=0,end=s1.size()-1;
    while(start<=end){
        char temp=s1[start];
        s1[start]=s1[end];
        s1[end]=temp;
        start++;
        end--;
    }
    cout<<s1<<endl;
    return 0;}