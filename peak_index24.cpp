#include<iostream>
using namespace std;
int peak_index(int arr[],int size){
    int l=0;
    int r=size-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>=arr[0]){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    return mid;
}
//     while(l<r){
//         if(arr[mid]>=arr[0]){
//             l=mid+1;
//         }
//         else{
//             r=mid;
//         }
//     }
//     return l;
// }
int main(){
    int arr[500],size,peak;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    peak=peak_index(arr,size);
    cout<<"peak index in the sorted array:"<<peak;
    return 0;
    }