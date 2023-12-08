#include<iostream>
using namespace std;
int main(){
    char ch[4],ch1[10];
    cin>>ch;
    ch[4]='\0';
    cout<<ch<<endl;
    cout<<ch[4];
    //note the output
    //we can enter more than 4 characters also in this ch array

    // for(int i=0;i<10;i++){
    //     cin>>ch1[i];
    // }
    // for(int i=0;i<10;i++){
    //     cout<<ch1[i];
    // }
    return 0;}