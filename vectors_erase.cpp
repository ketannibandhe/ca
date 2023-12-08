#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    v.push_back(1);
    v.push_back(10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.erase(v.begin()+2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    //inserting a number at perticular index
    v.insert(v.begin()+2,5000);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl; 

    //updating the index
    v[3]=3127;
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;  

    //clearing the array
    v.clear();//removes all the elements
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;   
    return 0;}