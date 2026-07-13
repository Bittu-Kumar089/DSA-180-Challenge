#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){
    //priority_queue<int> pq;  // priority queue of integers
    priority_queue<int, vector<int>, greater<int>> pq;  // min heap

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout<<pq.top()<<" ";  // print the top element
        pq.pop();  // remove the top element
    }
    cout<<endl;

    return 0;
}