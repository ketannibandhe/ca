#include<iostream>
using namespace std;
int main(){
    int arr[500],i,size,missing,repeated;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        arr[i]--;
    }
    for(i=0;i<size;i++){
        arr[arr[i]%size]+=size;
    }
    for(i=0;i<size;i++){
        if(arr[i]/size==0){
            cout<<"missing number: "<<i+1<<endl;
            continue;
        }
        if(arr[i]/size==2){
            cout<<"repeated number: "<<i+1<<endl;
        }
    }
    return 0;}