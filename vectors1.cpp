#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v1(5,1);//array of 5 elements with each value 1
    //size and capacity
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(9);
    v.push_back(34);
    v.push_back(78);  
    v.push_back(2);
    v.push_back(17);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //to update the value at a perticular index
    v[1]=5;
    cout<<"size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    return 0;}