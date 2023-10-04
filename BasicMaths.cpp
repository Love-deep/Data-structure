#include<bits\stdc++.h>
using namespace std;
//count the digits of number
/*
int count(int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    cout<<cnt;
    
    }
int main(){
    int n;
    cin>>n;
    count(n);
   
     
}
*/


/*
//REVERSE A NUMBER
int main(){
    int n; //8895
    cin>>n;
    int revnum=0;
    while(n>0){
    int lastdigit=n%10; //5
    n=n/10; //8895/10=889
    revnum=(revnum*10)+lastdigit;
    

    }
    cout<<revnum <<endl;
    return 0;

}
*/

/*
//check palindrome 
int main(){
    int n;
    cin>>n;
    int revnum=0;
    int dup=n;
    while(n>0){
    int lastdigit=n%10; 
    revnum=(revnum*10)+lastdigit;
    

    }
    if(dup==revnum)  cout<<"true";
    else cout<<"false";
    
    return 0;
}
*/

/*
//CHECK ARMSSTRONG NUMBER
int main(){
    int n; 
    cin>>n;
    int dup=n;
    int sum=0;
    while(n>0){
    int ld=n%10; 
    n=n/10; 
    sum=sum+pow(ld,3);
    }
    if(sum==dup) cout<<"number is armstrong";
    else cout<<"number is not armstrong";
}
*/

//print all divisor
/*
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
*/

/*
//ANOTHER METHOD TO PRINT DIVISOR
void prindivisor(int n){
 vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0 ) {
            ls.push_back(i);
            if((n/i) !=i) {
            ls.push_back(n/i);
            }
          }
        }
        sort(ls.begin(),ls.end());
        for(auto it:ls){
            cout<<it<<" ";
        }
}
int main(){
int n;
    cin>>n;
    prindivisor(n);
    
}
*/


/*
// check the number is prime or not
int main(){
    int n;
    cin>>n;
    int cnt=0;
     for(int i=1;i*i<=n;i++){
        if(n%i==0 ) {
           cnt++;
            if((n/i) !=i) {
            cnt++;
            }
        }
     }
        if(cnt == 2) cout<< "true";
        else cout<<"false";
}
*/


// GCD OF TWO NUMBEFRS

//Euclidean algorithm:-gcd(a,b)=gcd(a-b,b) a>b;
//we modify this algo to save time of reduction of steps and instead of subtraction we use modulus for reduction
// so algo becomes gcd(a,b)=gcd(a%b,b) a>b;

int main(){
    int a;
    int b;
    cin >>a;
    cin>>b;
    while(a>0 && b>0){
        if( a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;
    return 0;
}