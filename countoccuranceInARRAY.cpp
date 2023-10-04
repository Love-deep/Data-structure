#include <bits/stdc++.h>
using namespace std;
int f(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            count++;
    return count;
        
}
int main(){
    int arr[]={5,4,1,4,1,1,4,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    cout<<f(arr,n,x);
    return 0;
    }
