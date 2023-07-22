// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     int a; 
//     cin>> a; 
//     int arr[a]; 
//     for(int i=0; i<a; i++){
//         cin>> arr[i]; 
//     }
//     for(int i=a-1; i>=0; i--){
//         if (arr[i]%2==0)
//         cout<< arr[i] << " "; 
//     }
//     int n = sizeof(arr)/ sizeof(arr[0]); 
//     sort(arr, arr+n); 
//     for(int i=0; i<a; i++){
//         if (arr[i]%2!=0)
//         cout<< arr[i] << " "; 
//     }
//     return 0; 
// }




    //// second method 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main() {
    // int n ; 
    // cin>> n ; 
    // vector<int> even ; 
    // vector<int > odd; 
    // for(int i=0; i<n ;i++){
    //     int x ; 
    //     cin>> x; 
    //     if (x%2==0){
    //         even.push_back(x) ; 
    //     }
    //     else {
    //         odd.push_back(x); 
    //     }
    // }
    // sort(even.begin(), even.end()) ; 
    // reverse(even.begin(), even.end()); 
    // sort(odd.begin(), odd.end() ) ; 
    // for(int i=0; i<even.size(); i++){
    //     cout<< even[i] << " "; 
    // }
    // for(int i=0; i<odd.size(); i++){
    //     cout<< odd[i] << " "; 
    // }
    // return 0; 


int main() {
    int a; 
    cin>> a ;
    vector<int> even ; 
    vector<int> odd ; 
    for(int i=0; i<a; i++){
        int x ;
        cin>> x ;
        if (x%2==0){
            even.push_back(x) ; 
        }else {
            odd.push_back(x) ; 
        }
    }
    sort(even.begin(), even.end()) ; 
    reverse(even.begin(), even.end()) ; 
    for(int i : even){
        cout<< i << " " ; 
    }
    sort(odd.begin(), odd.end()) ; 
    for(int j : odd) {
        cout<< j << " " ; 
    }
    return 0; 
}





        ////third method
//     int a; 
//     cin>> a; 
//     vector<int> total(a); 
//     vector<int> even ; 
//     vector<int > odd;
//     for(int i=0; i<a; i++){
//         cin>> total[i]; 
//     } 
//     for(int i=0; i<a; i++){

//         if (total[i]%2==0){
//         even.push_back(total[i]); 
//     } else {
//         odd.push_back(total[i]); 
//     }
    
//     }
//     sort(even.begin(), even.end() ) ; 
//     reverse( even.begin(), even.end()); 
    
//     sort(odd.begin(), odd.end()); 
    
//     for(int i=0; i<even.size(); i++){
//         cout<< even[i] << " "; 
//     }
//     for(int i=0; i<odd.size(); i++){
//         cout<< odd[i] << " "; 
//     }
//     return 0; 

// }