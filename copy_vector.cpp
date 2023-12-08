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

    //copy one vector to another vector
    vector<int>a;
    a=v;
    cout<<"vector a"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;}