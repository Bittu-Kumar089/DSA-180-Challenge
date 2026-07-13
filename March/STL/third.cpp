#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec(10,3);  //dynamic programming - tabulation DP[][]

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}