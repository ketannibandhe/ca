#include<iostream>
using namespace std;
int main(){
    int arr[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0,j=2;i<3,j>=0;i++,j--){
        sum+=arr[i][j];
    }
    cout<<sum;
    return 0;}