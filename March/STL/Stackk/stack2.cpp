#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main(){
    stack<int> s;  // stack of integers

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout<<s.top()<<" ";  // print the top element
        s.pop();  // remove the top element
    }
    cout<<endl;
    return 0;
}