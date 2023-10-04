#include<bits/stdc++.h>
using namespace std;

/*
//printing N TO 1
void f(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    f(i-1,n);
}
int main(){
    int n;
    cin >>n;
    f(n,n);

}
*/

/*
//print 1 TO N;
void f(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin >>n;
    f(1,n);

}
*/
/*
//sum of n numbers using recursive function
void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
   
    f(i-1,sum+i);
    
}
int main(){
    int n;
    cin >>n;
    f(n,0);

}
*/

/*
//print sum of n number using function recursion;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
    
    
    
}
int main(){
    int n;
    cin >>n;
    cout<<sum(n);

}*/


/*
//REVERSE AN ARRAY
void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    f(0,arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}
*/

/*
bool f(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1,s);
}

int main(){
    string s="MADAM";
    cout<<f(0,s);
    return 0; 
}
*/

int f(int n){
    if(n<=1){
      return n;
    }
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;

}
int nain(){
    int n;
    cin>>n;
    cout<<f(4);
}