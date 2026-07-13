#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    pair<int, pair<char, int>> p = {1, {'a', 2}};  // nested pair
    cout<<p.first<<endl;  // 1
    cout<<p.second.first<<endl;  // a
    cout<<p.second.second<<endl;  // 2
    return 0;
}
 