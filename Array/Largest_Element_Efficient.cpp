#include<bits/stdc++.h>
using namespace std;

//O(n^2)
int Naive_Approach(int arr[],int n){

    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
            return arr[i];
    }
    return -1;
}


int Efficient_Approach(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int aN[n];
    cout<<"O(n^2)"<<endl;
    for(int i=0;i<n;i++)
        cin>>aN[i];
    printf("Largest is %d\n",Naive_Approach(aN,n));

    cout<<"O(n)"<<endl;
    int aE[n];
    for(int i=0;i<n;i++)
        cin>>aE[i];
    printf("Largest is %d",Efficient_Approach (aE,n));   

    return 0;
}