#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[c]);
            c++;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    moveZero(a,n);

    cout<<"Moved Array"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<",";

    return 0;
}