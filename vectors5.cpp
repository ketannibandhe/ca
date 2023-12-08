#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(8);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    cout<<"v[0] "<<v[0]<<endl;
    cout<<"arr.front() "<<v.front()<<endl;
    cout<<"v[v.size()-1] "<<v[v.size()-1]<<endl;
    cout<<"v.back() "<<v.back()<<endl;
    return 0;}