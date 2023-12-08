#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(10);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.pop_back();
    cout<<"v.size()"<<v.size()<<endl;
    v.pop_back();
    cout<<"v.size()"<<v.size()<<endl;
    v.pop_back();
    cout<<"v.size()"<<v.size()<<endl;
    v.pop_back();
    cout<<"v.size()"<<v.size()<<endl;
    v.pop_back();
    cout<<"v.size()"<<v.size()<<endl;
    return 0;}