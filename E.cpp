// #include<iostream>
// using namespace std;
// int main() {
//     int a; 
//     int cnt =0; 
//     cin>> a; 
//     int arr[a] ; 
//     for(int i=0; i<a; i++){
//         cin>> arr[i] ; 
//     }
//     for(int i=0; i<a; i++){
//         for(int j = i+1 ; j<a; j++){
//             if (arr[i] == arr[j])
//             cnt++; 
            
//         }
//     }
//     if (cnt==3){
//         cout << 1 << endl; 
//     } else {
//         cout<< 0 << endl ; 
//     }
//     return 0 ; 
// }







#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m; // key - phone number,  value - канша рет кездесты
    int n;
    cin >> n ;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int cnt = 0;
    for(map<string,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if((*it).second == 3 )
        {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;

 
}