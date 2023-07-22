#include<bits/stdc++.h>
using namespace std;
// int main() {
//     map<string,int> ans; 
//     int a; 
//     cin>> a; 
//     string s[a] ; 
//     for(int i=0; i<a; i++){
//         cin>> s[i] ; 
//         ans.insert(make_pair(s[i],i+1)); 
//     }
//     map<string,int> :: iterator iter; 
//     for(iter= ans.begin(); iter != ans.end(); iter++){
//         cout<< (*iter).first << " "<< (*iter).second << endl; 
//     }
//     return 0; 
    
// }



    //// other method than the previous method; 
int main(){
    map<string,int> location; 
    int a; 
    cin>> a; 
    for(int i=1; i<=a; i++){
        string s ;
        cin>> s; 
        location.insert(make_pair(s,i)); 
    }
    map<string,int> :: iterator iter; 
    for(iter= location.begin(); iter!= location.end(); iter++){
        cout<< iter->first << " "<< iter->second << endl; 
    }
    return 0; 

}