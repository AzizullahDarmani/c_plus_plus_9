#include<iostream>
#include<set> 
#include<map>
using namespace std;
// int main() {
//     int a; 
//     cin>> a; 
//     set<pair<int, int>> coordinate;
//     for (int i=0; i<a; i++){
//         int x,y; 
//         cin>> x >> y; 
//         coordinate.insert(make_pair(x,y)); 
//     }
//     for(set<pair<int, int>>:: iterator it = coordinate.begin(); it!= coordinate.end(); it++){
//         cout<< (*it).first << " "<< (*it). second << endl; 
//     }
//     return 0; 
// }


int main() {
    set<pair<int , int >> coordinate ; 
    int a; 
    cin>> a; 
    for(int i=0; i<a; i++){
        int x, y ;
        cin>> x >> y ; 
        coordinate.insert(make_pair(x,y)) ; 
    }
    set<pair<int, int >>:: iterator iter ; 
    for(iter = coordinate.begin(); iter!= coordinate.end(); iter++){
        cout<< (*iter).first << " " << (*iter).second << endl; 
    }
    return 0; 
}






    //// map method  
// int main() {
//     int size ;
//     cin>> size ; 
//     map<int , int > done ; 
//     for(int i=1 ; i<=size; i++){
//         int key, value; 
//         cin>> key >> value; 
//         done.insert(make_pair(key,value)) ; 

//     }
//     int cnt = 1; 
//     cout<< " --------------------------------------------" << endl ;
//     for(auto it = done.begin(); it!= done.end(); it++){
//         cout<< (*it).first << " " << (*it).second << endl ; 
//     }
//     return 0; 
    

// }





// int main() {
//     int size;
//     cout << "Enter the size of the map: ";
//     cin >> size;
    
//     map<int,int> values;
//     for(int i = 1; i <= size; i++) {
//         int key, value;
//         cout << "Enter key and value for element " << i << ": ";
//         cin >> key >> value;
//         values.insert(make_pair(key, value));
//     }
    
//     cout << "Elements in the map:" << endl;
//     int count = 1;
//     for(auto& p : values) {
//         cout << count << ". " << "Key: " << p.first << ", Value: " << p.second << endl;
//         count++;
//     }
    
//     return 0;
// }







