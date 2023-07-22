#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> student ;
    int a; 
    cin>> a; 
    string ss[a]; 
    for(int i=0; i<a; i++){
        string s; 
        cin>> s; 
        if (student[s]==0){
            ss[i]= "new user added"; 
        } else {
            ss[i]= "user already exist"; 
        }
        student[s]= 1; 



    }
    for(int i=0; i<a; i++){
        cout<< ss[i] << endl; 
    }
    return 0; 
}