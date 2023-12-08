#include<iostream>
#include<vector>
using namespace std;
int main(){
    //create vector and display
    vector<int>v;
    //size and capacity
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(34);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(78);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;   
    v.push_back(2);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(17);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    //in the output notice the difference between size and capaity
    return 0;}