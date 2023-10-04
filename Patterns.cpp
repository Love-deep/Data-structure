#include<iostream>
using namespace std;
void print1(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<"* ";
        }
    cout<<endl;
  }
}
void print2(int n){
    for(int i=0;i<n;i++){
    //for spaces
    for(int j=0;j<=n-i-1;j++){
        cout<<"  ";
    }
    //for stars
    for(int j=0;j<2*i+1;j++){
        cout<<"* ";
    }
    for(int j=0;j<=i;j++){
        cout<<"  ";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
    //for spaces
    for(int j=0;j<=i;j++){
        cout<<"  ";
    }
    //for stars
    for(int j=0;j<2*(n-i)-1;j++){
        cout<<"* ";
    }
    for(int j=0;j<=i;j++){
        cout<<"  ";
    }
    cout<<endl;
    }
    
}
void print3(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if( i>=n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}
void print4(int n){
    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;


    }
}
// number pyramid and mirror of that
void print5(int n){
    
    
    int space=2* (n-1);
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=i;j++){
            cout<< j;
        }
        
        for(int j=1;j<=space;j++){
            cout<<" ";
            
        }
        //for numbers
        for(int j=i;j>=1;j--){
            cout<<j;
            }
        cout<<endl;
        space -= 2;
       
    }
}
//continuous numbers pyramid
void print6(int n){
    int num=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
        
        
    }
    }
void print7(int n){
        
        for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+ n-i;ch++){
            cout<<ch;
        }
         cout<<endl;
    }
    }
void print8(int n){
    for(int i=1;i<=n;i++){
    //for spaces
    for(int j=1;j<=n-i;j++){
        cout<<"  ";
    }
    //for stars
    for(int j=1;j<=2*i-1;j++){
        cout<<"* ";
    }
    
    cout<<endl;
    }
} 
void print9(int n){
    int space = 2*n -2;
     for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if( i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
            
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
            
        }
        cout<<endl;
        if(i<n) space -=2;
        else space +=2;
        
    }
}
void print10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i== n || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
          

        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         int n;
         cin>>n;
        print10(n);
    }

}