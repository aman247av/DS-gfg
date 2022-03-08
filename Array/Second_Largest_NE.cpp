#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n){
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max])
            max=i;
    }
    return max;
}

//Aux space=2
int Naive_Approach(int arr[],int n){
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
                res=i;
            else
                if(arr[i]>arr[res])
                    res=i;    
        }
    }
    return arr[res];
}

int Efficient_Approach(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else
            if(arr[i]!=arr[largest]){
                if(res==-1||arr[i]>arr[res])
                    res=i;
            }
    }
    return arr[res];
}





int main(){
    int n;
    cin>>n;
    int aN[n];
    cout<<"\nO(n^2)"<<endl;
    for(int i=0;i<n;i++)
        cin>>aN[i];
    printf("Second Largest is %d\n",Naive_Approach(aN,n));

    cout<<"\nO(n)"<<endl;
    int aE[n];
    for(int i=0;i<n;i++)
        cin>>aE[i];
    printf("Second Largest is %d",Efficient_Approach (aE,n));
    return 0;
}