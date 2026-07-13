#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main(){
    stack<int> st;  // stack of integers

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"Top element is "<<st.top()<<endl;  // top element is 5

    st.pop();  // remove the top element

    cout<<"Top element is "<<st.top()<<endl;  // top element is 4

    cout<<"Size of stack is "<<st.size()<<endl;  // size of stack is 4

    return 0;
}