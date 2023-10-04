#include<bits/stdc++.h>
using namespace std;
// lets talk about container in stl

// pairs in cpp
    void explainpair(){
        pair<int,int> p={1,9};
        cout<<p.second<<endl;
        pair<int,pair<int,int>> q={1,{1,9}};
        cout<<q.second.first<<endl;
        pair<int,int> arr[]={{1,4},{2,5},{9,6}};
        cout<<arr[2].first<<endl;

    }
    //vectors
    void explainvector(){
        vector<int> v={10,20,12,23,35};
        v.erase(v.begin()+2,v.begin()+4);
        cout<<"v";
    }
    int main(){
        explainpair();
        explainvector();
    }
