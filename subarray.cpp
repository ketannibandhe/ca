#include<iostream>
using namespace std;
int main(){
    int arr[500],i,j,size,sum1=0,sum2=0,n;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
        sum1+=arr[i];
    }
    cout<<sum1<<endl;
    for(i=0;i<n-1;i++){
        sum2+=arr[i];
        if(sum2==sum1/2){
            cout<<"yes";
            return 1;
        }
    }
    cout<<"no";
    return 0;
}