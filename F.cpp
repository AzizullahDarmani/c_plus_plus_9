#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
            //push(): This is a member function of the stack class that adds an element to the top of the stack
        }
        else
        {
            if(st.empty())
            {
                cout << "NO";
                return 0;
            }
            else if(st.top() == '(' && s[i] == ')')
            //top(): This is a member function of the stack class that returns a reference to the top element of the stack.
            {

                //pop(): This is a member function of the stack class that removes the top element from the stack.
                st.pop();
            }
        }
    }
    if(st.empty())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}