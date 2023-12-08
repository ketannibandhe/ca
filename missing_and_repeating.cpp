// 7
// 3 5 6 6 1 2 4
// repeated number: 6
// missing number7

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[500],size,i,j,repeat,missing;
    int count[500]={};
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        count[arr[i]-1]++;
    }
    for(i=0;i<size;i++){
        if(count[i]==2){
            cout<<"repeated number: "<<i+1<<endl;
            continue;
        }
        else if(count[i]==0){
            cout<<"missing number"<<i+1<<endl;
        }
    }
    
    return 0;}