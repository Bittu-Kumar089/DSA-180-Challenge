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

    stack<int> s2;  // another stack of integers
    s2.swap(s);  // swap the contents of s and s2

    cout<<"s size is "<<s.size()<<endl;
    cout<<"s2 size is "<<s2.size()<<endl;
    return 0;
}