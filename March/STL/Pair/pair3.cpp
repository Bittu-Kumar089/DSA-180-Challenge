#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};  // vector of pairs

    vec.push_back({7, 8});  // adding a pair to the vector
    vec.emplace_back(9, 10);  // adding a pair to the vector using emplace_back

    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;  // first and second are the members of the pair class
    }
    return 0;
}