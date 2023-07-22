// #include <iostream>
// #include <string>
// #include <queue>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     queue<char> q;
//     for (int i = 0; i < s.size(); i++) {
//         if (q.empty()) {
//             q.push(s[i]); 
//             } else if (q.front() == '1' && s[i] == '1') {
//                 q.pop(); 
//             } else {
//                 q.push(s[i])  ; 
//             }
//          }
//          string answer = ""; 
//          while(!q.empty()){
//             answer+= q.front(); 
//             q.pop(); 
//          }
//          reverse(answer.begin(), answer.end()); 
//          cout<< answer ; 
//          return 0; 
//     }










// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;


// int main() {
//     stack<char> st; 
//     string s ;
//     cin>> s; 
//     for(int i=0; i<s.size(); i++){
//         if (st.empty()){
//             st.push(s[i]); 
//         }else if (st.top() == '1' && s[i]=='1'){
//             st.pop(); 
//         }else{
//             st.push(s[i]); 
//         }
//     }
//     string done = "" ; 
//     while (!st.empty()){
//         done+= st.top(); 
//         st.pop(); 
//     }
//     reverse(done.begin(), done.end()); 
//     cout<< done ; 
//     return 0; 
// }




// int main() {
//     stack<char> st; 
//     string s ;
//      cin>> s; 
//      for(int i=0; i<s.size(); i++){
//         if (st.empty()){
//             st.push(s[i]); 
//         } else if (st.top()=='1' && s[i]=='1'){
//             st.pop(); 
//         }else {
//             st.push(s[i]); 
//         }
//      }
//      string answer = "" ; 
//      while(!st.empty()){
//         answer+= st.top(); 
//         st.pop(); 
//      }
//      reverse(answer.begin(), answer.end()) ; 
//      cout<< answer; 
//      return 0 ; 
// }





// int main() {
//     stack <char> st;
//     string s;
//     cin>> s; 
//     for(int i=0; i<s.size() ; i++){
//         if (st.empty()){
//             st.push(s[i]); 
//         }else{
//             if (st.top() =='1' && s[i]=='1'){
//                 st.pop(); 
//             }else {
//                 st.push(s[i]); 
//             }
//         }
//     }
//     string ans = ""; 
//     while(!st.empty()){
//         ans+= st.top(); 
//         st.pop(); 
//     }
//     reverse(ans.begin(), ans.end()); 
//     cout<< ans ; 
//     return 0; 
// }










// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     string ans = "";
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == '1') {
//             if (ans.size() > 0 && ans.back() == '1') {
//                 ans.pop_back();
//             } else {
//                 ans += '1';
//             }
//         } else {
//             ans += '0';
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }