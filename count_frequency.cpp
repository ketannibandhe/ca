#include<iostream>
using namespace std;
int main(){
    int arr[500],size,i;
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
        cout<<i+1<<" Occurs "<<arr[i]/size<<" times"<<endl;
    }

    return 0;}