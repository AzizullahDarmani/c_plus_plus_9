#include<iostream>
#include<map>
using namespace std;

int main() {
//     int n, m; 
//     cin >> n >> m; 
    
//     map<int, int> number; 
    
//     for(int i = 0; i < n; i++) {
//         int x; 
//         cin >> x; 
//         number[x]++; 
//     }
    
//     int cnt = 0; 
    
//     // So, number.find(m) != number.end() checks if the iterator returned by find() 
//     //is not equal to the "end" iterator of the number map. If the iterator is not 
//     //equal to the "end" iterator, it means that the key m exists in the number map, 
//     //and we can get its count using number[m]. If the iterator is equal to the "end" 
//     //iterator, it means that the key m does not exist in the number map, and we don't 
//     //need to do anything.

//     if(number.find(m) != number.end()) {
//         cnt = number[m];
//     }
    
//     cout << "The number of occurrences of " << m << " is " << cnt << endl; 
//     return 0; 





    // map<int, int > number ; 
    // int n , k ; 
    // cin>> n >> k ; 
    // for(int i=0; i<n ; i++){
    //     int x; 
    //     cin>> x; 
    //     number[x]++; 
    // }
    // cout<< number[k] ; 
    // return 0 ; 




    

    int a, b; 
    cin>> a >> b; 
    map<int , int > done  ;
    for(int i=0; i<a; i++){
        int x; 
        cin>> x; 
        done[x]++ ; 
    }
    int cnt = 0; 
    if (done.find(b)!= done.end()){
        cnt = done[b]  ; 
    }
    
    cout<< "the count of numbers that are repeated: "<< cnt << endl ; 





 




    

}







    //// array method
// #include<iostream> 
// using namespace std;
// int main() {
//     int a ,b; 
//     int cnt =0; 
//     cin>> a >> b; 
//     int arr[a]; 
//     for(int i=0; i<a; i++){
//         cin>> arr[i] ; 
//         if (b == arr[i]) 
//         cnt++; 
//     }
//     cout<< cnt << endl; 
//     return 0; 
// }
