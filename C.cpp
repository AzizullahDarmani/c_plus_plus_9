#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
// int main() {
//     int n ; 
//     cin>> n ; 
//     map<int , int > number; 
//     for(int i=0; i<n; i++){
//         int x; 
//         cin>> x; 
//         number[x]++; 
//     }
//     int cnt =0; 
//     map<int, int > :: iterator it ; 
//     for( it = number.begin(); it != number.end(); it++){
//         if ((*it).second>=2)
//         cnt++; 
//     }
//     cout<< "the number of elements that are repeated: "<< cnt; 
//     return 0; 
// }








int main() {
    int a; 
    cin>> a ;
    map<int , int > done  ;
    for(int i=0; i<a; i++){
        int x; 
        cin>> x; 
        done[x]++ ; 
    }
    int cnt = 0; 
    map<int, int > :: iterator iter ; 
    for(iter = done.begin() ;iter != done.end(); iter++){
        if ((*iter).second>=2)
        cnt++ ; 
    }
    cout<< "the count of numbers that are repeated: "<< cnt << endl ; 
}