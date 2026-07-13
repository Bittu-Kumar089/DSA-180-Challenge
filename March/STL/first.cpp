#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;  //0

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    // cout<<vec.size()<<endl;  
    // cout<<vec.capacity()<<endl;  

    vec.pop_back();
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    //cout<< "Val at idx 2 is "<<vec.at(2)<<endl;
    cout<<"front element is "<<vec.front()<<endl;
    cout<<"back element is "<<vec.back()<<endl;
    return 0;
}