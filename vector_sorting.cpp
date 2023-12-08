#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    v.push_back(102);
    v.push_back(180);
    v.push_back(90);
    v.push_back(101);
    v.push_back(56);
    // sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;}