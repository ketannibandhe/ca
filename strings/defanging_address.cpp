#include<iostream>
using namespace std;
int main(){
    string s="";
    string s1="1.123.23.456.a.s";
    int index=0,end=s1.size();
    while(index<end){
        if(s1[index]=='.'){
            s+="[.]";
        }
        else{
            s+=s1[index];
        }
        index++;
    }
    cout<<s<<endl;
    return 0;
}