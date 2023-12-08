#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5,1);
    cout<<"arr.size(): "<<arr.size()<<endl;
    cout<<"arr.capacity: "<<arr.capacity()<<endl;
    arr.push_back(2);
    cout<<"arr.size: "<<arr.size()<<endl;
    cout<<"arr.capacity: "<<arr.capacity()<<endl;
    return 0;}